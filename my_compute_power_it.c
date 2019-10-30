/*
** EPITECH PROJECT, 2018
** task03
** File description:
** task03
*/

int my_compute_power_it(int nb, int p)
{
    int popo = 1;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    while (p != 0) {
        popo = popo * nb;
        --p;    
    }
    return (popo);
}
