/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-corewar-pierre.giordano
** File description:
** corewar
*/
#include <sys/types.h>
#include <stdio.h>
#include <stdint.h>

#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../lib/printf/include/my_printf.h"
#include "../../op.h"
#include "struct.h"
#include "instructions.h"

#ifndef SOLVER_H_
    #define SOLVER_H_

    #define CHAMPION_NAME_OFFSET 4
    #define CHAMPION_NAME_LENGTH 128

    // main.c
    void print_h(void);

    // recover_file.c;
    void print_array(char **array);
    int fill_champ(champ_t **warriors);

    // array.c;
    int error_file(char *file_name, struct stat *info);
    unsigned char *read_file(char *file_name);

    // corewar.c
    int have_file_point_cor(char *str);

    // mem.c
    unsigned char *create_mem(void);
    void print_good(int i, int *line);
    void print_mem(unsigned char *mem);
    int my_corewar(corewar_t *corewar);
    int fill_mem(unsigned char *mem, champ_t **warriors);

    // add_tab.c
    champ_t **add_tab(champ_t **warriors, int adss, char *file, int nb_p);

    // free.c
    void free_champ(champ_t **warriors);
    void free_array(char **array);
    void free_corewar(corewar_t *corewar);

    // extract_data.c
    char *extract_name(unsigned char *file);
    char *extract_comment(unsigned char *file);
    char *extract_code(unsigned char *file, int size);
    int fill_champ(champ_t **warriors);

    // champ.c
    champ_t **create_champ(champ_t **warriors);
    void print_champ(champ_t **warriors);

    // struct.c
    corewar_t *create_base(void);

    // my_corewar.c
    int load_champ(unsigned char *mem, champ_t *champ);

#endif /* !SOLVER_H_ */
