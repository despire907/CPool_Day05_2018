/*
** EPITECH PROJECT, 2018
** task07
** File description:
** task07
*/

int my_prime(int nb)
{
    if (nb == 0)
        return (0);
    if (nb == 2)
        return (1);
    if (nb == 3)
        return (1);
    if (nb % 2 == 0)
	return (0);
    if (nb % 3 == 0)
	return (0);
    else {
        return (1);
    }
}

int my_find_prime_sup(int nb)
{
    int popo = nb;
    
    while (my_prime(popo) == 0) {
	nb++;
	popo++;
    }
    return (nb);
}
