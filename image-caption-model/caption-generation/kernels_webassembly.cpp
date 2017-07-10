
#include <stdlib.h>
#include <math.h>

float static_buffer[11133205];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {11114588,11114592,0,8793,1,1,512};
int meta_buf_1[] = {11114592,3,512,11114592,11113052,1,1,512,512,1,512,512,1,1,1,512,1,1,512};
int meta_buf_2[] = {11115616,3,512,11113564,11112540,1,1,512,512,1,512,512,1,1,1,512,1,1,512};
int meta_buf_3[] = {11115616,3,512,11115616,11114592,1,1,512,512,1,512,512,1,1,1,512,1,1,512};
int meta_buf_4[] = {11115616,11115104,11114592,9004032,10052608,512,1,1,512,11109980,11114076,11112028};
int meta_buf_5[] = {11115104,4502016,11115616,1,8793,512};
int meta_buf_6[] = {11115616,11101184,11115616,1,8793,1};
int meta_buf_7[] = {11115616,11124412,1,8793};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7};

extern "C" void init() {
    //static_buffer = (float*)malloc(11133205 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void embedding_bff664a25d5cd866fdc2b62a606caa6eb07d8ca9703906d8f951028d(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const float *W = (static_buffer + meta_buffer[2]);
    const int vocabulary = meta_buffer[3];
    const int sequence_len = meta_buffer[4];
    const int batch_size = meta_buffer[5];
    const int dim = meta_buffer[6];

    for (int gid = 0; gid < batch_size * sequence_len; gid += 1) {
        int t = gid % sequence_len;
        int batch = gid / sequence_len;

        int word = (int)X[gid];
        for (int d = 0; d < dim; d++) {
            Y[gid * dim + d] = W[word * dim + d];
        }
    }
}


void elementwisemul_7d55d8021e77415f861e306b13bacf0e995231389ff550023e3d8d53(const int * meta_buffer)
{
    float *Y = (static_buffer + meta_buffer[0]);
    const int N = meta_buffer[2];

float y;
float x0, x1;
const float *X0 = (meta_buffer[3+2+ (0)] ? static_buffer : dynamic_buffer) + meta_buffer[3 + (0)];
const float *X1 = (meta_buffer[3+2+ (1)] ? static_buffer : dynamic_buffer) + meta_buffer[3 + (1)];
    
    for (int i = 0; i < N; i++)
    {



x0 = X0[i];
x1 = X1[i];

        {
y = x0 * x1;
        }

        Y[i] = y;
    }
}


void elementwiseadd_0e535909dbb02b8c2f4b5633b10582b42cfa672a6e57120aef70db2f(const int * meta_buffer)
{
    float *Y = (static_buffer + meta_buffer[0]);
    const int N = meta_buffer[2];

float y;
float x0, x1;
const float *X0 = (meta_buffer[3+2+ (0)] ? static_buffer : dynamic_buffer) + meta_buffer[3 + (0)];
const float *X1 = (meta_buffer[3+2+ (1)] ? static_buffer : dynamic_buffer) + meta_buffer[3 + (1)];
    
    for (int i = 0; i < N; i++)
    {



x0 = X0[i];
x1 = X1[i];

        {
y = x0 + x1;
        }

        Y[i] = y;
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void lstm_f7d21f55521097c72f1fba6e76fadb300c0e0be98b1edb5512fe8a73(const int * meta_buffer)
{

    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    float *mem_c = (static_buffer + meta_buffer[2]);
    float *W_input = (static_buffer + meta_buffer[3]);
    float *W_hidden = (static_buffer + meta_buffer[4]);
    const int input_dim = meta_buffer[5];
    const int sequence_len = meta_buffer[6];
    const int batch_size = meta_buffer[7];
    const int hidden_dim = meta_buffer[8];
    const int hidden_dim4 = hidden_dim * 4;
    const int ofs_i = 0;
    const int ofs_f = hidden_dim * 1;
    const int ofs_c = hidden_dim * 2;
    const int ofs_o = hidden_dim * 3;
    float *b = (static_buffer + meta_buffer[9]);
Eigen::Map<Eigen::RowVectorXf > vec_b(b, hidden_dim4);
    
    auto activation = [](float x) {
        
        return tanhf(x);
        
    };

    auto recurrent_activation = [](float x) {
        
        x = 1.0F / (1.0 + expf(-x));
        return x;
        
    };

    
        const float *initial_c = (static_buffer + meta_buffer[10]);
        for (int i = 0; i < hidden_dim * batch_size; i++) {
            mem_c[i] = initial_c[i];
        }
        
    float *mem_h = new float[hidden_dim * batch_size]();
    
        const float *initial_h = (static_buffer + meta_buffer[11]);
        for (int i = 0; i < hidden_dim * batch_size; i++) {
            mem_h[i] = initial_h[i];
        }
        
    float *mem_v = new float[hidden_dim4 * batch_size](); // i, f, c, o
    float *mem_x_t = new float[input_dim * batch_size]();
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > mat_v(mem_v, batch_size, hidden_dim4);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > mat_h(mem_h, batch_size, hidden_dim);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > mat_x_t(mem_x_t, batch_size, input_dim);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > mat_w_input(W_input, input_dim, hidden_dim4);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > mat_w_hidden(W_hidden, hidden_dim, hidden_dim4);

    for (int t = 0; t < sequence_len; t++) {
        // copy x of current time
        for (int n = 0; n < batch_size; n++) {
            for (int dim = 0; dim < input_dim; dim++) {
                mem_x_t[dim + n * input_dim] = X[(n * sequence_len + t) * input_dim + dim];
            }
        }

        mat_v.noalias() = mat_x_t * mat_w_input + mat_h * mat_w_hidden;
        mat_v.rowwise() += vec_b;

        for (int n = 0; n < batch_size; n++) {
            // update c, h
            for (int dim = 0; dim < hidden_dim; dim++) {
                float val_i = mem_v[dim + ofs_i + n * hidden_dim4];
                float val_f = mem_v[dim + ofs_f + n * hidden_dim4];
                float val_c = mem_v[dim + ofs_c + n * hidden_dim4];
                float val_o = mem_v[dim + ofs_o + n * hidden_dim4];
                val_i = recurrent_activation(val_i);
                val_f = recurrent_activation(val_f);
                float val_last_c = mem_c[dim + n * hidden_dim];
                val_c = activation(val_c) * val_i + val_last_c * val_f;
                mem_c[dim + n * hidden_dim] = val_c;
                mem_h[dim + n * hidden_dim] = activation(val_c) * recurrent_activation(val_o);
            }
        }
        
        //write output on sequence
#ifdef SEQUENCE_OUTPUT
        for (int n = 0; n < batch_size; n++) {
            for (int dim = 0; dim < hidden_dim; dim++) {
                Y[(n * sequence_len + t) * hidden_dim + dim] = mem_h[n * hidden_dim + dim];
            }
        }
#endif
    }

    // write output
#ifndef SEQUENCE_OUTPUT
    for (int i = 0; i < batch_size * hidden_dim; i++) {
        Y[i] = mem_h[i];
    }
#endif

    delete[] mem_h;
    delete[] mem_v;
    delete[] mem_x_t;
#undef SEQUENCE_OUTPUT
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void axiswisebias_2c5dea3d008381f35c96b0418e0c849bf9f138abcd775df0091f4ba1(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
          float *Y = (static_buffer + meta_buffer[2]);
    const float *B = (static_buffer + meta_buffer[1]);
    const int D1 = meta_buffer[3];
    const int D2 = meta_buffer[4];
    const int D3 = meta_buffer[5];

    for (int index = 0; index < D1 * D2 * D3; index++) {
        Y[index] = X[index] + B[index / D3 % D2];
    }
}


void softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int C = meta_buffer[3];

    for (int n = 0; n < N; n++) {
        float set_max = X[n * C];
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            if (val > set_max) {
                set_max = val;
            }
        }

        float sum_exp = 0.0F;
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            float exp_x = expf(val - set_max);
            sum_exp += exp_x;
            Y[n * C + c] = exp_x;
        }

        for (int c = 0; c < C; c++) {
            Y[n * C + c] /= sum_exp;
        }
    }
}

extern "C" void run() {
embedding_bff664a25d5cd866fdc2b62a606caa6eb07d8ca9703906d8f951028d(meta_buf_0);
elementwisemul_7d55d8021e77415f861e306b13bacf0e995231389ff550023e3d8d53(meta_buf_1);
elementwisemul_7d55d8021e77415f861e306b13bacf0e995231389ff550023e3d8d53(meta_buf_2);
elementwiseadd_0e535909dbb02b8c2f4b5633b10582b42cfa672a6e57120aef70db2f(meta_buf_3);
lstm_f7d21f55521097c72f1fba6e76fadb300c0e0be98b1edb5512fe8a73(meta_buf_4);
sgemm_49ee440e78a4467f5e364896610c9bdbdd5dbf08d70b98a210d579d8(meta_buf_5);
axiswisebias_2c5dea3d008381f35c96b0418e0c849bf9f138abcd775df0091f4ba1(meta_buf_6);
softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(meta_buf_7);

}

