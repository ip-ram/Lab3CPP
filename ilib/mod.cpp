#include "mod.hpp"
#include <iostream>
#include <optional>
#include <sstream>
#include <vector>
#include <sstream>

template <typename OK, typename ERROR>
Result<OK, ERROR>::Result()
{}


template <typename OK, typename ERROR>
Result<OK, ERROR>::Result(OK ok):
ok_(std::move(ok))
{}

template <typename OK, typename ERROR>
Result<OK, ERROR>::Result(ERROR err):
error_(std::move(err))
{}

template <typename OK, typename ERROR>
OK Result<OK, ERROR>::Unwrap() {
    if (error_.has_value()) {
        std::cerr << "RUNTIME ERROR: " << error_.value() << "\n";
    }
    return ok_.value();
}

template <typename T>
Result<std::vector<T>, std::string> split_to_whitespace(std::string string) {
        T element;
    std::vector<T> elements;
    std::stringstream ss(string);

    elements.clear();

    while (true) {
        if (ss >> element) {
            elements.push_back(element);
        } else if (ss.eof()) {
            break;
        } else if (ss.fail()) {
            Result<std::vector<T>, std::string> status("can`t create vector");
            return status;
        }
    }
    Result<std::vector<T>, std::string> status(elements);
    return status;
}

template <typename T>
Result<std::vector<T>, std::string> split_to_whitespace(std::string string, int count) {
    T element;
    std::vector<T> elements;
    std::stringstream ss(string);

    elements.clear();

    while (count > 0) {
        if (ss >> element) {
            elements.push_back(element);
        } else if (ss.eof()) {
            break;
        } else if (ss.fail()) {
            Result<std::vector<T>, std::string> status("can`t create vector");
            return  status;
        }
        count--;
    }

    Result<std::vector<T>, std::string> status(elements);
    return  status;
}

// Explicit template instantiations for the types used by the tasks.
template struct Result<std::vector<int>, std::string>;
template struct Result<std::vector<std::string>, std::string>;

template Result<std::vector<int>, std::string> split_to_whitespace<int>(std::string);
template Result<std::vector<int>, std::string> split_to_whitespace<int>(std::string, int);
template Result<std::vector<std::string>, std::string> split_to_whitespace<std::string>(std::string);
template Result<std::vector<std::string>, std::string> split_to_whitespace<std::string>(std::string, int);
