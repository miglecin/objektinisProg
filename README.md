# objektinisProg

Ši programa leidžia įvesti studentų vardus, pavardes, namų darbų rezultatus ir egzamino balus. Programoje galimas pasirinkimas apskaičiuoti galutinį balą naudojant vidurkį arba medianą. Be to, programoje yra galimybė generuoti atsitiktinius studentų balus ir vardus.

## Funkcionalumas

1. **Vartotojo įvestis**: 
   - Įvedami studentų vardai, pavardės, namų darbų rezultatai ir egzamino balas.
   
2. **Galutinio balo skaičiavimas**:
   - Galimas pasirinkimas apskaičiuoti galutinį balą naudojant vidurkį arba medianą.
   
3. **Generuoti atsitiktinius duomenis**:
   - Programoje galima pasirinkti generuoti atsitiktinius studentų vardus, pavardes ir pažymius.

4. **Studentų ir namų darbų skaičius**:
   - Programoje galima įvesti nežinomą studentų ir namų darbų skaičių. Vartotojas pats nusprendžia, kada baigti įvedimą.

5. **Duomenų saugojimas**:
   - Duomenys gali būti saugomi naudojant C kalbos masyvą arba `std::vector` konteinerį.

6. **Meniu pasirinkimai**:
   - 1 - Rankinis įvedimas.
   - 2 - Atsitiktinių pažymių generavimas.
   - 3 - Atsitiktinių studentų vardų, pavardžių ir pažymių generavimas.
   - 4 - Baigti darbą.

## Kaip naudoti

1. Pasirinkite reikiamą funkciją iš meniu.
2. Jei pasirenkate rankinį įvedimą, įveskite studentų vardus, pavardes ir pažymius.
3. Pasirinkite, ar norite apskaičiuoti galutinį balą naudojant vidurkį, ar medianą.
4. Jei pasirinksite atsitiktinį duomenų generavimą, pasirinkite reikiamus parametrus ir stebėkite, kaip programa generuoja atsitiktinius rezultatus.

## Versijos

- **v.pradinė**: Pirmasis juodraštinis release, kuriame įdiegta rankinė duomenų įvestis ir galimybė skaičiuoti galutinį balą naudojant vidurkį.
- **v0.1**: Atsitiktinių duomenų generavimo funkcionalumas, naudojamos tiek C masyvai, tiek `std::vector`. 
  - Programos veikimas su atsitiktiniais balais ir vardais.
  - Galimybė pasirinkti meniu pasirinkimus.
