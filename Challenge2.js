//2
function cekHoki(n) {
    if (n % 2 === 0 && n % 7 === 0) {
        return "HOKI";
    } else {
        return "BIASA";
    }
}

//2
function hitungTabungan(hari) {
    let total = 0;
    for (let h = 1; h <= hari; h++) {
        if (h % 2 === 0) {
            total += 5000;
        } else {
            total += 2000;
        }
    }
    return total;
}

//3
function cekTilang(plat, tanggal) {
    if (plat % 2 === tanggal % 2) {
        return "AMAN";
    } else {
        return "TILANG";
    }
}

//4
function hitungKopi(jumlahGelas) {
    let total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    return total;
}

//5
function tepokNyamuk(jumlah) {
    for (let i = 1; i <= jumlah; i++) {
        if (i % 3 === 0) {
            console.log("TEPOK");
        } else {
            console.log(i);
        }
    }
}


console.log(cekHoki(14));
console.log(cekHoki(10));

console.log(hitungTabungan(3));

console.log(cekTilang(24, 12));
console.log(cekTilang(13, 20));

console.log(hitungKopi(2));
console.log(hitungKopi(4));

tepokNyamuk(5);