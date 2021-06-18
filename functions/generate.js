const axios = require('axios');

const API_KEY = process.env.COHERE_API_KEY;

const handler = async (event) => {
    try {
        const response = await axios({
            method: 'post',
            url: 'https://api.cohere.ai/baseline-shark/generate',
            headers: {
                'Content-Type': 'application/json',
                'Authorization': `Bearer ${API_KEY}`
            },
            data: event.body
        });

        return {
            statusCode: response.status,
            body: JSON.stringify(response.data),
        };
    } catch (error) {
        return {
            statusCode: error && error.response ? error.response.status : 500,
            body: error.message,
        };
    };
};

module.exports = { handler };
