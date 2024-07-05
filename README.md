# SO_LONG ES🇪🇸

## Introducción

Este proyecto es un pequeño juego en 2D desarrollado en C. Durante el proyecto tienes que aplicar los tres primeros proyectos que se hacen como estudiante de 42: `libft`, `ft_printf` y `get_next_line`. Con ellos tendrás que ser capaz de leer los ficheros `.ber` (mapas) y hacer una comprobación de errores. Para poder desarrollar el proyecto y hacer que se abra una ventana en la que aparezcan los `sprites` utilizados se utiliza la `mlx`.

## Objetivo

El objetivo es poder crear un juego en 2d de cualquier temática. El jugador deberá poder coger todos los coleccionables que haya en el mapa y alcanzar la salida. En el `bonus`El jugador se encontrará enemigos, en mi caso son fuegos, y tambien deberá alcanzar todos los coleccionablles y llegar a la salida. Si el jugador se choca contra algún enemigo perderá.

## Tecnologías & Lenguajes usados
- **Lenguaje:** C
- **Conceptos clave:** MLX, manejo de errores.
- **Compilación:** Makefile para crear el juego

## Características

- Admite cualquier archivo cuya extensión sea `.ber`siempre y cuando se encuentre en la carpeta `Maps/`.
- Para mover al personaje se pueden utilizar las teclas `w` `a` `s` `d` o las flechas de dirección.
- Si el mapa no es válido se mostrará un mensaje de error en la consola.

## Uso

1. **Compilación**: Compila el `so_long` ejecutando `make` en la raiz del directorio del proyecto. Esto generará un programa llamado `so_long`. Para el `bonus` ejecuta `make bonus` en la raíz del directorio del proyecto. Esto generará un programa llamado `so_long_bonus`.
2. **Integración**: Incluye el fichero mapa `Maps/*.ber` para poder pasarle un mapa al que jugar.
3. **Ejemplo**: Aquí tienes un ejemplo sencillo de cómo usar `so_long`:

```c
git clone https://github.com/Pablo-VH/so_long.git so_long
cd so_long
make
./so_long Maps/map1.ber
```

## SO_LONG EN🇬🇧

## Introduction

This project is a small 2D game developed in C. During the project you have to apply the first three projects that you do as a student of 42: `libft`, `ft_printf` and `get_next_line`. With them you will have to be able to read `.ber` files (maps) and do error checking. In order to be able to develop the project and have a window open showing the `sprites` used the `mlx` is used.

## Objective

The objective is to be able to create a 2d game of any theme. The player must be able to collect all the collectibles on the map and reach the exit. In the `bonus` The player will encounter enemies, in my case they are fires, and also must reach all the collectibles and reach the exit. If the player crashes into any enemy he will lose.

## Technologies & Languages used
- Language:** C
- Key concepts:** MLX, error handling.
- Compilation:** Makefile to create the game.

## Features

- Supports any file whose extension is `.ber` as long as it is located in the `Maps/` folder.
- To move the character you can use the `w` `a` `s` `d` keys or the arrow keys.
- If the map is invalid an error message will be displayed in the console.

## Usage

1. **Compile**: Compile the `so_long` by running `make` in the root of the project directory. This will generate a program called `so_long`. For the `bonus` run `make bonus` in the root of the project directory. This will generate a program called `so_long_bonus`.
2. **Integration**: Include the map file `Maps/*.ber` so you can pass it a map to play.
3. **Example**: Here is a simple example of how to use `so_long`:

```c
git clone https://github.com/Pablo-VH/so_long.git so_long
cd so_long
make
./so_long Maps/map1.ber
```
