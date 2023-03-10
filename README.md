<img src="https://raw.githubusercontent.com/JaeSeoKim/badge42/main/public/badge42_logo.svg" width ="10%"/>
<h1 align="center">
	Push swap
</h1>

<p align="center">
	<b><i>Development repo for 42 projects</i></b><br>

---


Es un proyecto de algoritmo simple de 42  en el que el objetivo sera mostrar por la salida estándar una serie de instrucciones para ordenar de menor a mayor en el stack A los números recibidos. El objetivo principal sera realizar esto en el menor numero posible de acciones.  Sean meros sitios y negativos pero nunca duplicados. En el stack b no habra nada. Tendremos  un numero máximo de acciones permitidas para cada caso:

	•	Ordenar 3 valores: no más de 3 acciones.
	•	Ordenar 5 valores: no más de 12 acciones.
	•	Ordenar 100 valores (asignando puntos en función del numero de movimientos):
	•	5 puntos por menos de 700 acciones.
	•	4 puntos por menos de 900 acciones.
	•	3 puntos por menos de 1.100 acciones.
	•	2 puntos por menos de 1.300 acciones.
	•	1 puntos por menos de 1.500 acciones.
	•	Ordenar 500 valores (asignando puntos en función del numero de movimientos):
	•	5 puntos por menos de  5.500 acciones.
	•	4 puntos por menos de  7.000 acciones.
	•	3 puntos por menos de  8.500 acciones.
	•	2 puntos por menos de  10.000 acciones.
	•	1 puntos por menos de  11.500 acciones.

#### 	FUNCIONES  POR ARCHIVO

	•	COST: cost, cheapest_move.

	•	DO_MOVE: reverse_both, rotate_both, rotate_a, rotate_b
		do_move.

	•	MAIN: push_swap, get_numbers, main.

	•	POSITION: get_position, get target, position_lowest_index
		get_target position.

	•	PUSH: push, do_pa, do_pb.

	•	ROTATE: rotate, do_ra, do_rb, do_rr.

	•	REVERSE_ROTATE: rev_rotate, do_rra, do_rrb, do_rrr.

	•	SORT THREE: biggest_index, sort_three.

	•	SORT: push_init, sort_stack, sort.

	•	SPLIT: ft_strlen, countwords, word_dup, ft_cpy, ft_split.

	•	STACK: stack_new, stack_add, get_bottom, before_bottom ,
		get_stack_size.

	•	START: input_is_correct, is_duplicate, get_index.

	•	SWAP: swap, do_sa, do_sb, do_ss.

	•	UTILS: free_stack, error_exit, ft_atoi, ft_putstr, abs.

####	MOVIMIENTOS A REALIZAR

	•	sa : swap a - intercambia los dos primeros elementos encima del stack a. No hace
	•	nada si hay uno o menos elementos.
	•	sb : swap b - intercambia los dos primeros elementos encima del stack b. No hace
	•	nada si hay uno o menos elementos.
	•	ss : swap a y swap b a la vez.
	•	pa : push a - toma el primer elemento del stack b y lo pone encima del stack a.
		No hace nada si b está vacío.
	•	pb : push b - toma el primer elemento del stack a y lo pone encima del stack b.
		No hace nada si a está vacío.
	•	ra : rotate a - desplaza hacia arriba todos los elementos del stack a una posición,
		de forma que el primer elemento se convierte en el último.
	•	rb : rotate b - desplaza hacia arriba todos los elementos del stack b una posición,
		de forma que el primer elemento se convierte en el último.
	•	rr : rotate a y rotate b - desplaza al mismo tiempo todos los elementos del stack
		a y del stack b una posición hacia arriba, de forma que el primer elemento se
		convierte en el último.
	•	rra : reverse rotate a - desplaza hacia abajo todos los elementos del stack a una
		posición, de forma que el último elemento se convierte en el primero.
	•	rrb : reverse rotate b - desplaza hacia abajo todos los elementos del stack b una
		posición, de forma que el último elemento se convierte en el primero.
	•	rrr : reverse rotate a y reverse rotate b - desplaza al mismo tiempo todos
		los elementos del stack a y del stack b una posición hacia abajo, de forma que
		el último elemento se convierte en el primero.

####	PLANTEAMIENTO Y ALGORITMO

	El proyecto esta realizado mediante listas enlazadas. En cada uno de los nodos guardaremos 6 valores que nos permitirán
	calcular cual es nuestro movimiento mas eficiente para ir ordenando nuestra pila. Este proyecto permite conseguir
	la máxima puntuación y realizar la corrección con menos movimientos que el tope para la puntuación máxima. 
	Además nos permitirá admitir los argumentos como un string, mezclados o solo números como argumentos.
	
####	TESTERS
	El tester.sh os generará la cantidad de números aleatorios que querais en el número de pruebas que necesiteis, 
	y os dará una media de los movmientos realizados para resolverlo.
	Con python visualazer podreis ver de manera gráfica como va ordenando vuestra pila. 
	Solo teneis que ejecutar cualquiera de los siguiente comandos 
	python3 python_visualizer.py `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`  
	or python3 python_visualizer.py $(seq 1 100 | shuf | tr '\n' ' ')
	Para push swap tester tendremos que modificar un poquito el script y que el nombre del checker corresponda con el nuestro.
	
####	VIDEOS
	
	Os dejo un pequeño video que espero ayude a la comprensión.


https://user-images.githubusercontent.com/114256637/224307024-88827f99-d1e8-4b9d-bf63-34d110784871.mp4



https://user-images.githubusercontent.com/114256637/224306906-7d0beeb2-3641-4d4b-b796-197a67c7b908.mp4

