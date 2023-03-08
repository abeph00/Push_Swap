# Push_swap
PUSH SWAP

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

FUNCIONES  POR ARCHIVO

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

MOVIMIENTOS A REALIZAR

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