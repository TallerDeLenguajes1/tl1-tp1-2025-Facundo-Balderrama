[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# .Gitignore
### ¿Por qué es conveniente incluirlo?
El archivo .gitignore es coinveniente por varias razones:
- **Mentener el repositorio limpio:** Evita que se suban archivos temporales o innecesarios al repositorio.
- **Reducir el tamaño del repositorio:** Si no ignoras los archivos innecesarios, estos pueden acumularse, aumentando el tamaño del repositorio y como consecuencia relentizar las operaciones de git.
- **Privacidad y seguridad:** Algunos proyectos contienen archivos con informacion sensible, como configuraciones especificas o claves de API. El .gitignore ayuda a que estos archivos no sean subidos por accidente.

### ¿Cuando se debe incluir el archivo?
- **Desde el inicio del proyecto:** Es recomendable incluirlo desde el inicio del proyecto , preferiblemente cuando se crea el repositorio.
- **Cuando agregas un nuevo entorno o herramiente:** Si cambias de entorno o añades nuevas herramientas, debes actualizar el .gitignore para que refleje los nuevos archivos que no se deben subir.
- **Al trabajr en un proyecto compartido:** Es fundamental en un equipo de trabajo tener un .gitignore en comun para evitar conflictos. Por lo tanto, se debe crear o actualizar cuando mas personas se unen al proyecto.

### ¿Como configurar  el archivo .gitignore?
Se basa en especificar que archivos o directorios deben ser ignorados. El archivo .gitignore utiliza patrones para  indicar que archivo o carpeta deben ser ignorados:
- **Ignorar archivos especificos:** Se escribe el nombre del archivo. Por ejemplo.
archivo.txt
- **Ignorar carpetas completas:** Se usa una barra al final del nombre de la carpeta. Por ejemplo.
/carpeta_innecesaria/
- **Ignorar todos los archivos con una extension especifica:** Se utiliza un comodin. Por ejemplo.
*.log
- **Ignorar archivos generados  por el sistema operativo o editor:** Ejemplo.
.vscode/
Thumbs.db
.DS_Store

# Explicacion del ejercicio de punteros

# Explicación del ejercicio sobre punteros en C

## 1. ¿Por qué el resultado de los apartados 2 y 3 es el mismo?

En los apartados 2 y 3 del ejercicio, se obtiene la misma dirección de memoria porque ambas variables apuntan a la misma dirección de memoria.

- **Punto 2**: Se muestra la dirección de memoria almacenada por el puntero, que es la dirección a la que apunta el puntero. Que seria la direccion de la variabble.
- **Punto 3**: Se muestra la dirección de memoria de la variable.

Como el puntero almacena la direccion de memoria de la variable, la dirección de memoria del puntero es la misma que la dirección de la variable. 

## 2. ¿Qué obtiene en el punto 4?

En el **punto 4** se obtiene la dirección de memoria de la variable puntero, es decir, la dirección en la que se encuentra almacenado el puntero.

## 3. ¿Es igual a los anteriores? ¿Por qué?

No, la dirección de memoria del puntero obtenida en el punto 4 no es igual a la dirección de la variable ni a la dirección almacenada por el puntero en los puntos 2 y 3. La razón es que el puntero y la variable a la que apunta son dos variables diferentes, por lo que tienen diferentes direcciones de memoria. 