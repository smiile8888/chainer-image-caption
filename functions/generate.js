const axios = require('axios');
const env = require('dotenv');
env.config();
const key = process.env.COHERE_API_KEY

const handler = async (event) => {
    console.log(event);
    console.log(key);
    try {
        const response = await axios({
            method: 'post',
            url: 'https://api.cohere.ai/baseline-orca/generate',
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
        return { statusCode: status, body: error.message }
    }
}

module.exports = { handler }
