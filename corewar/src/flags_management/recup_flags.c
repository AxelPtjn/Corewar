/*
** EPITECH PROJECT, 2023
** Corewar
** File description:
** recup_flags
*/

#include "../../include/corewar.h"

int recup_flags(char **av, corewar_t *corewar)
{
    corewar->dump = -1; int nb_f = 0;
    int prog = -1; int adress = -1;
    for (int i = 1; av[i] != NULL; i++) {
        if (flags_error(av, i, prog, adress) != 0)
            return 1;
        if (dump_flag(av, corewar, &i) != 0)
            continue;
        prog = prog_number_flag(av, i, prog);
        if (if_prog_number_exists(av, &i))
            continue;
        adress = load_adress_flag(av, i, adress);
        if (if_load_adress_exists(av, &i) != 0)
            continue;
        corewar->warriors = add_tab(corewar->warriors, adress, av[i], prog);
        nb_f += 1; adress = -1; prog = -1;
    }
    if (error_file_max(nb_f) != 0 || find_adress_number(corewar) != 0)
        return 1;
    find_prog_number(corewar); fill_adress_number(corewar, nb_f);
    return 0;
}
