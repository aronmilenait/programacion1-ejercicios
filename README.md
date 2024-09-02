# programacion1-ejercicos

En este repositorio, voy a guardar los ejercicios de la materia **Programación I** de la **Tecnicatura en Programación** de la **Universidad Tecnológica Nacional (UTN)**, carrera que estoy estudiando al momento de crearlo.

El **lenguaje de programación** utilizado es **C++**, ya que es el que estamos usando en esta materia.

Los ejercicios están organizados en carpetas **según el número de guía**, para que sea más fácil encontrarlos.

Todo lo posible fue escrito en **español**, debido a que es una carrera en una **universidad argentina**.

## ¿Cómo compilar los programas?

Personalmente, uso el compilador **g++**, pero muchos utilizan **CodeBlocks**, ya que es lo enseñado en la cursada. Buscaba un método sencillo en GNU/Linux para hacerlo, a través de la consola, y encontré este.

### 1. Instalar g++ en Linux

**En distribuciones basadas en Debian/Ubuntu:**

```
sudo apt update
sudo apt install g++

```

**En distribuciones basadas en Red Hat/Fedora:**

```
sudo dnf install gcc-c++

```

**En distribuciones basadas en Arch Linux:**

```
sudo pacman -S gcc

```

### 2. Verificar la instalación

```
g++ --version

```

### 3. Compilar el programa

En el directorio en el que esté tu programa, abrí una consola y compilalo mediante el siguiente comando:

```
g++ nombreDelArchivo.cpp -o nombreDelArchivo

```

Ahora, podés ejecutarlo escribiendo:

```
./nombreDelArchivo

```

¡Y listo!
