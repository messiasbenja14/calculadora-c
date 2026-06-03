int dividir(int numero1, int numero2)
{
    int dividendo, divisor;
    int quociente, resto;

    dividendo = numero1;
    divisor = numero2;
    quociente = 0;
    resto = dividendo;

    while (resto >= divisor) {
        quociente = quociente + 1;
        resto = resto - divisor;
    }

    return quociente;
}
