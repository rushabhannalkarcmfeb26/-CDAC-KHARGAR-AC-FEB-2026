
// Local quotes (no API needed)
const quotes = [
    { text: "Stay hungry, stay foolish.", author: "Steve Jobs" },
    { text: "The best way to get started is to quit talking and begin doing.", author: "Walt Disney" },
    { text: "Don’t let yesterday take up too much of today.", author: "Will Rogers" },
    { text: "It’s not whether you get knocked down, it’s whether you get up.", author: "Vince Lombardi" },
    { text: "Believe you can and you're halfway there.", author: "Theodore Roosevelt" },
    { text: "Success is not in what you have, but who you are.", author: "Bo Bennett" }
];

const btn = document.getElementById("btn");
const quoteDiv = document.getElementById("quote");
const authorDiv = document.getElementById("author");

btn.addEventListener("click", showQuote);

function showQuote() {
    const randomIndex = Math.floor(Math.random() * quotes.length);
    const q = quotes[randomIndex];

    quoteDiv.textContent = `"${q.text}"`;
    authorDiv.textContent = `— ${q.author}`;
}