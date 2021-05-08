//Function To Remove ZEROs from a Number
int Remove_Zeros(int num) {
    if (num < 10) {
        return num;
    } else if (num % 10 == 0) {
        return Remove_Zeros(num / 10);
    }
    return Remove_Zeros(num / 10) * 10 + num % 10;
}