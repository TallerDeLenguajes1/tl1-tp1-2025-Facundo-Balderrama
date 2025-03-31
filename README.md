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