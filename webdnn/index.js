'use strict';

let runner_image, runner_caption;
const hidden_dim = 512;
const output_dim = 8793;

async function run() {
  await load_models();
  await run_sample_data();
}

let sample_data;
async function run_sample_data() {
  console.log('start running');
  sample_data = await (await fetch('./image-caption-model/example_io.json')).json();
  console.log('loaded sample');
  let switch_off = new Float32Array(hidden_dim);
  let switch_on = new Float32Array(hidden_dim);
  switch_on.fill(1.0);

  let in_views = runner_caption.getInputViews();
  let out_views = runner_caption.getOutputViews();
  in_views[0].set(new Float32Array(sample_data.input_img_embedded));//var_input_img
  // in_views[1] //var_input_word
  in_views[2].set(switch_on);//var_switch_img
  in_views[3].set(switch_off);//var_switch_word
  in_views[4].set(new Float32Array(hidden_dim));//var_last_h
  in_views[5].set(new Float32Array(hidden_dim));//var_last_c

  await runner_caption.run();

  console.log('var_word_prob_biased', out_views[0].toActual());
  console.log('var_lstm_h', out_views[1].toActual());
  console.log('expected_var_lstm_h', new Float32Array(sample_data.image_lstm_output));
  console.log('var_lstm_c', out_views[2].toActual());

  in_views[1].set(new Float32Array(sample_data.bos_raw_vec));
  in_views[2].set(switch_off);
  in_views[3].set(switch_on);
  in_views[4].set(out_views[1].toActual());
  in_views[5].set(out_views[2].toActual());

  await runner_caption.run();

  console.log('var_word_prob_biased', out_views[0].toActual());
  console.log('expected_var_word_prob_biased', new Float32Array(sample_data.bos_word_prob));
  console.log('var_lstm_h', out_views[1].toActual());
  console.log('expected_var_lstm_h', new Float32Array(sample_data.bos_lstm_output));
  console.log('var_lstm_c', out_views[2].toActual());
}

async function load_models() {
  runner_image = await WebDNN.load('./image-caption-model/image-feature');
  runner_caption = await WebDNN.load('./image-caption-model/caption-generation');
}
