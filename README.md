# Figuras en 3D

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega es está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde.  

## Instrucciones

Escriba un programa que le pida al usuario que escoja entre las sigueintes figuras en 3 dimensiones: cilindro, esfera, prisma rectangular. Luego le pregunte si quiere calcular el volumen o el área de la superficie de la figura escogida. 

- El programa debe hacer *overloading* de las funciones para calcular volumen y área de la superficie. 
  - Es decir, deben haber tres funciones *overloaded* para volumen (una para cada figura) y tres funciones *overloaded* para área de la superficia (una para cada figura). 
- Redonde el resultado a dos espacios decimales. 
- Debe hacer *input validation*, no se deben aceptar valores negativos para ninguno de los datos pedidos y solo debe aceptar valores válidos para los menus. 
  - El *input validation* debe hacerse **antes** de invocar las funciones. 
- Al menos uno de los menús debe estar implementado utilizando un `switch`. 

**Ejemplo de output**

```
Este programa calcula el volumen y el área de la supercicie de tres figuras. 

Escoga una figura:
  a. Cilindro
  b. Esfera
  c. Prisma rectangular
Selección: b

Escoga entre los siguientes opciones:
  a. Volumen
  b. Área de la superficia
Selección: a

Entre el radio de la esfera: 1.0
El volumen de la esfera es 4.18
```

### Rúbrica

Su programa debe:

- Seguir las instrucciones detalladas arriba (11 pts):
  - Hacer *overloading* de las funciones para volumen y área de la superficie (4 pts)
  - Hacer *input validation* de los datos entrados (menú y medidas) (3 pts)
  - Calcular el volumen y el área correctamente (2 pts)
  - Implementar al menos un menú con switch (para las figuras o para la medida que se va a calcular) (2 pts)
- Tener nombres apropiados para las variables y funciones (1 pt)
- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (1 pt)
- Debe estar debidamente comentado de manera que su código sea entendible (1 pt)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pt)
  - No es recomendado el uso de LLM para ningun trabajo, pero de utilizarlo debe incluir en el *header* un link a la conversación completa con los prompts hechos y las contestaciones brindadas por el LLM. De no hacerlo, si se detecta que su código fue copiado de un LLM, recibirá 0 en su trabajo.
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos
