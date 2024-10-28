double estimate_pi(long long int number_of_tosses) {
    long long int number_in_circle = 0;
    double x, y, distance_squared;

    for (long long int toss = 0; toss < number_of_tosses; toss++) {
        x = (double)rand() / RAND_MAX * 2 - 1;  // Random double between -1 and 1
        y = (double)rand() / RAND_MAX * 2 - 1;  // Random double between -1 and 1
        distance_squared = x * x + y * y;
        if (distance_squared <= 1) number_in_circle++;
    }

    return 4.0 * number_in_circle / number_of_tosses;
}