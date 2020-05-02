// Để thêm một phần tử vào vị trí sau cùng của vector:
// name_of_vector.push_back(name_of_element);

// Để bỏ đi phần tử cuối cùng của vector:
// name_of_vector.pop_back();

// Để bỏ đi tất cả các phần tử của vector:
// name_of_vector.clear();

// Để lấy ra phần tử đầu tiên của vector:
// name_of_vector.front();

// Để lấy ra phần tử cuối cùng của vector:
// name_of_vector.back();

// Để lấy ra phần tử vị trí thứ n của vector (đếm từ 0):
// name_of_vector.at(n);

// Để biết số lượng phần tử của vector:
// name_of_vector.size();

// Để biết vector có phần tử hay không:
// name_of_vector.empty();

// Để duyệt vector bằng iterator:
// vector<integer>::iterator iter_name; // Khai báo con trỏ để duyệt
// for (iter_name = name_of_vector.begin(); iter_name != name_of_vector.end(); iter_name++) {
// cout << *iter_name << endl;
// }

// Chú ý, sau khi bạn dùng áp dụng toán tử ++ vào biến iterator, nó sẽ chỉ đến phần tử tiếp theo của vector. Còn toán tử * (value of) cho biết giá trị của phần tử mà con trỏ iterator đang trỏ tới.