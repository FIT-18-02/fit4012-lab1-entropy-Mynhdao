# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tìm hiểu và cài đặt các khái niệm cơ bản về lý thuyết thông tin bao gồm Entropy Shannon và độ dư thừa (Redundancy). Đồng thời, thực hành thuật toán Euclid mở rộng để tìm nghịch đảo modulo, nền tảng cho các hệ mã hóa công khai.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa |0.0000  |8.0000  | Chuỗi lặp hoàn toàn, không có tính bất ngờ. |
| abcd |2.0000  | 6.0000 | Các ký tự phân bổ đều, entropy tăng lên. |
| hello world | 2.8454 | 5.1546 | Chuỗi thực tế, độ phức tạp trung bình. |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại (gcd=3) |

## 4. Kết luận
Thông qua bài lab, em đã hiểu rõ cách định lượng "lượng tin" trong một thông điệp. Khó khăn lớn nhất là việc xử lý số dư âm khi thực hiện thuật toán Euclid mở rộng trong hàm mod_inverse, điều này được khắc phục bằng cách chuẩn hóa kết quả về khoảng $[0, m-1]$. Bài lab giúp em củng cố tư duy về tối ưu hóa dữ liệu và toán học rời rạc trong an toàn thông tin.
