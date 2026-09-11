const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output:process.stdout
});

rl.question('Massukan nama: ', (nama) => {
    rl.question('Masukan umur: ', (umur) => {
        console.log(`Hola ${nama}, umur kamu ${umur} tahun.`);
        rl.close();
    });
});






