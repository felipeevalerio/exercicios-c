let n1 = 8,
    n2 = 2,
    n3 = 9
    
// n1 < n2 && n2 < n3 < >

console.log(`${n1} não está entre ${n2} e ${n3} ? 
    ${(n2 > n3 && (n1 > n2 || n1 < n3)) || (n3 > n2 && (n1 > n3 || n1 < n2)) || (n2 == n3)  ? "Não está" : "Está"}`)