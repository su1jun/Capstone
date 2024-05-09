const http = require("http");

const host = 'localhost';
const port = 8000;

const server = http.createServer((req, res) => {
    res.write("This is the response from the server");
    res.end();
});

server.listen(port, host, () => {
    console.log(`Server is running at http://${host}:${port}`);
});
