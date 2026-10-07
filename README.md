# Laboratorio 05 - Pruebas unitarias (xUnit) y cobertura de código

**Curso:** Ingeniería de Software II - UCSP
**Docente:** DSc. Edgar Sarmiento Calisaya
**Autora:** Alice Gabriela Sucasaca Ilasaca

Pruebas unitarias con **Google Test** y cobertura de código con **gcov** para `BubbleSorter::sort` (C++),
diseñadas a partir del **grafo de flujo de control** y la **complejidad ciclomática** (V(G) = 4).

## Estructura
- `src/` implementación (`BubbleSorter.h`, `BubbleSorter.cpp`)
- `test/` pruebas (`test.cpp`)

## Cobertura
```
cd build/CMakeFiles/bubble.dir/src
gcov -b -c BubbleSorter.cpp.gcno | grep -A5 "BubbleSorter.cpp'"
cat BubbleSorter.cpp.gcov
```

## Resultados
- Pruebas: **5/5 PASSED**
- Cobertura de `BubbleSorter.cpp`: **100 %** de líneas (7/7) y de ramas (6/6)
