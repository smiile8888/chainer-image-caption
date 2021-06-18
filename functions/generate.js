const axios = require('axios');
require('dotenv').config();

const key = process.env.COHERE_API_KEY

const handler = async (event) => {
    try {
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
            body: JSON.stringify(response.data),
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
