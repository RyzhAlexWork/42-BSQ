# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbowen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 13:45:23 by jbowen            #+#    #+#              #
#    Updated: 2019/02/20 20:14:46 by jbowen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

all:	main

main.o:
	gcc $(FLAG) -c main.c

ft_create_array.o:
	gcc $(FLAG) -c ft_create_array.c

ft_calc_width.o:
	gcc $(FLAG) -c ft_calc_width.c

ft_first_fill.o:
	gcc $(FLAG) -c ft_first_fill.c

ft_second_fill.o:
	gcc $(FLAG) -c ft_second_fill.c

ft_third_fill.o:
	gcc $(FLAG) -c ft_third_fill.c

ft_calc_cell.o:
	gcc $(FLAG) -c ft_calc_cell.c

ft_search_max.o:
	gcc $(FLAG) -c ft_search_max.c

ft_point_max.o:
	gcc $(FLAG) -c ft_point_max.c

ft_replace_values.o:
	gcc $(FLAG) -c ft_replace_values.c

ft_putchar.o:
	gcc $(FLAG) -c ft_putchar.c

ft_put_result.o:
	gcc $(FLAG) -c ft_put_result.c

connect_link.o:
	gcc $(FLAG) -c connect_link.c

error1.o:
	gcc $(FLAG) -c error1.c

error2.o:
	gcc $(FLAG) -c error2.c

error3.o:
	gcc $(FLAG) -c error3.c

file_manipulator.o:
	gcc $(FLAG) -c file_manipulator.c

ft_error.o:
	gcc $(FLAG) -c ft_error.c

ft_read_file.o:
	gcc $(FLAG) -c ft_read_file.c

ft_write_in_str.o:
	gcc $(FLAG) -c ft_write_in_str.c

several_maps.o:
	gcc $(FLAG) -c several_maps.c

main:	main.o ft_create_array.o ft_calc_width.o ft_first_fill.o ft_second_fill.o ft_third_fill.o ft_calc_cell.o ft_search_max.o ft_point_max.o ft_replace_values.o ft_putchar.o ft_put_result.o connect_link.o error1.o error2.o error3.o file_manipulator.o ft_error.o ft_read_file.o ft_write_in_str.o several_maps.o
	gcc $(FLAG) -o bsq main.o ft_create_array.o ft_calc_width.o ft_first_fill.o ft_second_fill.o ft_third_fill.o ft_calc_cell.o ft_search_max.o ft_point_max.o ft_replace_values.o ft_putchar.o ft_put_result.o connect_link.o error1.o error2.o error3.o file_manipulator.o ft_error.o ft_read_file.o ft_write_in_str.o several_maps.o

clean:
	rm -f main.o ft_create_array.o ft_calc_width.o ft_first_fill.o ft_second_fill.o ft_third_fill.o ft_calc_cell.o ft_search_max.o ft_point_max.o ft_replace_values.o ft_putchar.o ft_put_result.o connect_link.o error1.o error2.o error3.o file_manipulator.o ft_error.o ft_read_file.o ft_write_in_str.o several_maps.o

fclean: clean
	rm -f bsq
