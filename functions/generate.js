const axios = require('axios');
// const fetch = require('node-fetch');
// require('dotenv').config();

const key = process.env.COHERE_API_KEY

const handler = async (event) => {
    try {
        // const response = await fetch('https://api.cohere.ai/baseline-shark/generate', {
        //     method: 'POST',
        //     headers: {
        //         'Content-Type': 'application/json',
        //         'Authorization': `Bearer ${key}`,
        //     },
        //     body: event.body,
        // });

        // const result = await response.json();
        const response = await axios({
            method: 'post',
            url: 'https://api.cohere.ai/baseline-shark/generate',
            headers: {
                'Content-Type': 'application/json',
                'Authorization': `Bearer ${key}`
            },
            data: event.body
        })

        return {
            statusCode: response.status,
            body: response.data,
        }
    } catch (error) {
        let status = error && error.response ? error.response.status : 500
        return {
            statusCode: status,
            body: error.message,
        }
    }
}

module.exports = { handler }
