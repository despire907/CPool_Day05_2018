/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

int my_compute_factorial_it(int nb);

int my_compute_factorial_it(int nb)
{
    int popo = 1;
    int pipi = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    while (pipi < nb + 1){
        popo = popo * pipi;
        pipi++;
    }
    return(popo);
}
