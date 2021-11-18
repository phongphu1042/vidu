vidu
Bai tap su dung cac chuc nang git

<h1 align="center">Bài tập Git</h1> 
Mỗi SV đóng vai 2 user, tương ứng 2 kho.
1.	Hãy tạo 1 remote repository (RR)
Địa chỉ kho: …
2.	Chép kho đó về máy trên 2 thư mục User1 và User2. Đại diện cho 2 người làm nhưng thực chất là 1 vì dùng chung 1 account

3.	User1 chép file source.cpp được cung cấp vào LR của mình vừa tạo 

4.	User1 cho biết trạng thái (status) của các file vừa chép vào? Xem trạng thái bằng cách nào?
Trả lời: 

Hình minh họa

5.	User1 hãy thêm file đó vào LR
Trả lời: 


6.	User1 kiểm tra lại trạng thái các file đó
File source.cpp có trạng thái là gì?

Hình minh họa

7.	User1 ghi lại những thay đổi đó
Trả lời: 


8.	Đẩy các thay đổi đó lên RR 
Trả lời: 


9.	User2 lấy kho của nhóm mình về máy
	Trả lời: 


10.	User1 và User2 hoàn thành file source.cpp theo phân công
User1: hàm tổng. Và hàm main
User2: hàm hiệu . Và hàm main
11.	Hai User đẩy các phần thay đổi của mình lên RR và cho biết kết quả
Kết quả của User1
Kết quả cua User2:

12.	Giải quyết nếu có xung đột xảy ra.

13.	User2 phát triển thêm chức năng là tính tích.
14.	User2 đẩy lên RR (nhánh main)
15.	User1 xóa bỏ phần User 2 vừa làm chức năng tính tích
16.	Tách nhánh tich. Phát triển chức năng tích
17.	Làm xong push nhánh tích (trên RR phải có nhánh tích) 
18.	Pull request 
18b. User1 chấp nhận request. Có nghĩa là merge nhánh tích vào main
19. Sau khi thêm chức năng tích thì gắng tag là v2.0
Hình log sau khi thêm tag
 
19. User 2: Thêm 1 nhánh mới có tên là “ChanLe”
23. User 2: Viết thêm chức năng kiểm tra 1 số là số chẵn hay số lẻ
19. User 1: Thêm vào cuối file source.cpp dòng “//Cau 19
20. User 1: Commit lần thay đổi trong câu 19 với message “Them comment”
Hinh log
 git
21. User 1: Sửa lại message trong lần commit trên lại thành “Cau 19”
Hinh log
 
24. User 1: Hãy trộn nhánh ChanLe vào master bằng rebase
25. User 1: Chạy lệnh git log --graph --oneline –all để xem log và so sánh với merge
Hình log của rebase
 
Hình log của merge 
 
