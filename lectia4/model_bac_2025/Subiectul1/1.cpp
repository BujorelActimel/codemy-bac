// 1. Indicați intervalul căruia îi aparține valoarea 
// variabilei reale x, dacă și numai dacă expresia C/C++ de mai
// jos are valoarea 1.
// !(x<2004) && !(x<2005 || x>2024) && !(x>2025)
// a. [2004,2005] b. [2004,2024] c. [2005,2024] d. [2005,2025]

!(x<2004) -> x >= 2004

!(x<2005 || x>2024) -> x >= 2005 && x <= 2024

!(x>2025) -> x <= 2025

x >= 2005 && x <= 2024

x >= 2005
x <= 2024

Raspuns: c)