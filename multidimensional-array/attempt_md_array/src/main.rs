fn main() {
    let arr_2d: [[i32; 4]; 3] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]];

    for row in arr_2d {
        for element in row {
            print!("{} ", element);
        }
        println!();
    }
}
