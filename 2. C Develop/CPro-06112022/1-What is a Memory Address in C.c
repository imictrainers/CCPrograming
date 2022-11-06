/*
- Bất cứ khi nào một biến được định nghĩa bằng ngôn ngữ C, một vị trí bộ nhớ 
sẽ được gán cho nó, trong đó giá trị của nó được lưu trữ. 
- Chúng ta có thể kiểm tra địa chỉ bộ nhớ này bằng cách sử dụng ký hiệu &.
- Nếu var là tên của biến, thì &var sẽ cung cấp địa chỉ của nó.
- Hãy viết một chương trình nhỏ để xem địa chỉ bộ nhớ của bất kỳ biến 
nào mà chúng ta xác định trong chương trình của mình.
*/
#include<stdio.h>
void main()
{
    int var = 7;
    printf("Value of the variable var is: %d\n", var);
    printf("Memory address of the variable var is: %x\n", &var);
}
/*
Output:
Value of the variable var is: 7
Memory address of the variable var is: bcc7a00
*/
//Ngoài ra, trong khi sử dụng hàm scanf(), chúng ta đề cập đến &var 
//để nhận dữ liệu đầu vào của người dùng cho bất kỳ biến var nào.