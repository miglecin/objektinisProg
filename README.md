# objektinisProg

Ši programa leidžia įvesti, nuskaityti ir apdoroti studentų duomenis, įskaitant jų vardus, pavardes, namų darbų rezultatus ir egzamino balus. Galimas pasirinkimas apskaičiuoti galutinį balą naudojant vidurkį arba medianą. Programoje taip pat galima nuskaityti duomenis iš failų ir rūšiuoti juos pagal įvairius parametrus. Programoje naudojama klaidų valdymo mechanizmas ir duomenų tikrinimas.

## Kodas ir Struktūra

- Programoje buvo reorganizuotas, kad būtų naudota daugiau struktūrų (`struct`).
- Funkcijos ir duomenų tipai buvo perkelti į atskirus `.h` failus (header files).
- Įdiegta išimčių valdymo sistema, kuri patikrina įvestų duomenų teisingumą ir failų egzistavimą.

 **Klaidų valdymas**:
   - Programoje naudojamas klaidų gaudymo mechanizmas, kuris tikrina, ar įvesti duomenys yra teisingi (pvz., sveikieji ir realieji skaičiai).
   -  Tikrinama, ar failas egzistuoja prieš bandant jį nuskaityti.
