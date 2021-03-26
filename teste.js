let n1 = 3,
    n2 = 2,
    n3 = 67
    
// n1 < n2 && n2 < n3
                                                            
console.log(`O número ${n1} não está entre ${n2} e ${n3} ${(n1 < n2 && n3 < n2) || (n2 > n1 && n3 > n2) || (n2 < n1 && n2 < n3) || (n2 > n3 && n1 > n3) ?"Não Está":"Está"} `)
