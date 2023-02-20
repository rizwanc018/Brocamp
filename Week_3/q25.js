var library = [
    {
        title: 'The Road Ahead',
        author: 'Bill Gates',
        readingStatus: true
    },
    {
        title: 'Walter Isaacson',
        author: 'Steve Jobs',
        readingStatus: true
    },
    {
        title: 'Mockingjay: The Final Book of The Hunger Games',
        author: 'Suzanne Collins',
        readingStatus: false
    }
];

library.forEach(book => {
    const msg = book.readingStatus ? "Already read" : "You still need to read"
    console.log(`${msg} ${book.title} by ${book.author}`);
} )