```
Nombre:Tania Fallas Robles 

| Línea | Justificación | Corrección |
|---|---|---|
| 14 | Falta el punto y coma después de cerrar la estructura `Jugador`. | Agregar `;` después de la llave: `};` |
| 28 | Se asigna una cadena de texto a una variable de tipo `char`, que solo almacena un carácter. | Cambiar `"A"` por `'A'`: `char inicial = 'A';` |
| 31 | Se crea una referencia a `a` en lugar de una copia independiente. Por eso, al modificar `a`, también cambia `respaldo`. | Crear una copia: `Jugador respaldo = a;` |
| 16 | El parámetro `j` se pasa por valor, por lo que los cambios no afectan al jugador original. | Pasar el parámetro por referencia: `void sumarPuntos(Jugador& j, int extra)` |
| 35 | La condición `a.puntos > 100` no se cumple cuando el puntaje llega exactamente a 100. | Cambiar `>` por `>=`: `if (a.puntos >= 100)` |
```





