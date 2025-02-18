# C++ Programming Exercises

## Bài 1: Hello World
**Mục tiêu:** In chuỗi "Hello, World!" ra màn hình bằng `printf` hoặc `cout`.

### 📌 Output Format
Xuất kết quả ra màn hình.

### 🔹 **Ví dụ**
**Input:** _(Không có)_

**Output:**
```
Hello, World!
```
---

## Bài 2: Input và Output
**Mục tiêu:** Đọc và in ra tổng ba số nguyên nhập từ bàn phím.

### 📌 Input Format
Một dòng chứa ba số nguyên cách nhau bởi dấu cách.

### 📌 Output Format
In tổng của ba số nguyên đó.

### 🔹 **Ví dụ**
**Input:**
```
1 2 7
```
**Output:**
```
10
```

📌 *Giải thích:* `1 + 2 + 7 = 10`
---

## Bài 3: Kiểu dữ liệu cơ bản
**Mục tiêu:** Làm quen với các kiểu dữ liệu phổ biến trong C++.

### 📌 Input Format
Nhập các giá trị theo thứ tự: `int, long, char, float, double`.

### 📌 Output Format
Mỗi giá trị in ra trên một dòng. `float` làm tròn đến 3 chữ số thập phân, `double` đến 9 chữ số.

### 🔹 **Ví dụ**
**Input:**
```
3 12345678912345 a 334.23 14049.30493
```
**Output:**
```
3
12345678912345
a
334.230
14049.304930000
```
---

## Bài 4: Câu lệnh điều kiện
**Mục tiêu:** Hiển thị số từ 1-9 bằng chữ, các số lớn hơn 9 in "Greater than 9".

### 📌 Input Format
Một số nguyên `n`.

### 📌 Output Format
- Nếu `1 ≤ n ≤ 9`, in số bằng chữ.
- Nếu `n > 9`, in "Greater than 9".

### 🔹 **Ví dụ**
**Input:**
```
5
```
**Output:**
```
five
```

**Input:**
```
44
```
**Output:**
```
Greater than 9
```
---

## Bài 5: Vòng lặp `for`
**Mục tiêu:** Sử dụng vòng lặp `for` để in số hoặc kiểm tra chẵn/lẻ.

### 📌 Input Format
Hai số nguyên `a` và `b`.

### 📌 Output Format
- Nếu số nằm trong khoảng `1-9`, in bằng chữ.
- Nếu `n > 9`, in "even" nếu chẵn, "odd" nếu lẻ.

### 🔹 **Ví dụ**
**Input:**
```
8
11
```
**Output:**
```
eight
nine
even
odd
```
---

## Bài 6: Hàm
**Mục tiêu:** Viết hàm `max_of_four(a, b, c, d)` trả về số lớn nhất.

### 📌 Input Format
Bốn số nguyên, mỗi số trên một dòng.

### 📌 Output Format
In số lớn nhất trong bốn số đó.

### 🔹 **Ví dụ**
**Input:**
```
3
4
6
5
```
**Output:**
```
6
```
