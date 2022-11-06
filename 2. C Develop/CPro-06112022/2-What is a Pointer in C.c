/*
- Giống như chúng ta đã đề cập trước đó, con trỏ trong ngôn ngữ C là một biến 
chứa địa chỉ bộ nhớ.
- Con trỏ được sử dụng để truy cập bộ nhớ của một biến và thao tác với giá trị 
được lưu trữ trong đó.
- Con trỏ là một trong những tính năng thú vị và khác biệt nhất của ngôn ngữ C. 
Nó cung cấp sức mạnh và tính linh hoạt cho ngôn ngữ. Mặc dù lúc đầu con trỏ 
có thể hơi khó hiểu và phức tạp, nhưng hãy tin là một khi bạn hiểu khái niệm này, 
bạn sẽ có thể làm được nhiều hơn thế với ngôn ngữ C.
- Bất cứ khi nào một biến được khai báo trong chương trình, hệ thống sẽ cấp phát 
một vị trí, tức là một địa chỉ cho biến đó trong bộ nhớ, để giữ giá trị được gán. 
Vị trí này có số địa chỉ riêng mà chúng ta đã thấy trong chương trình ở trên.

- Chúng ta có thể truy cập giá trị 10 bằng cách sử dụng tên biến a hoặc bằng cách 
sử dụng địa chỉ 80F của nó.
- Câu hỏi đặt ra là làm thế nào chúng ta có thể truy cập một biến bằng cách sử dụng 
địa chỉ của nó? Vì địa chỉ bộ nhớ cũng chỉ là số nên chúng cũng có thể được gán 
cho một số biến khác. Các biến được sử dụng để giữ địa chỉ bộ nhớ được gọi là 
biến con trỏ.
- Do đó, một biến con trỏ không là gì khác ngoài một biến chứa địa chỉ của một số 
biến khác. Và giá trị của một biến con trỏ được lưu trữ trong một vị trí bộ nhớ khác.
*/
