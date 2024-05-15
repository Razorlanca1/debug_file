#pragma once
#include <bits/stdc++.h>
#define dbg(...) write(__VA_ARGS__); std::cout << " : " << #__VA_ARGS__ << endl;

template<typename F, typename S>
void val_write(const std::map<F, S> &x);

template<typename T, std::size_t S>
void val_write(const std::array<T, S> &x);

template<typename T>
void val_write(const std::vector<T> &x);

template<typename F, typename S>
void val_write(const std::pair<F, S> &x);

template<typename T>
void val_write(const std::set<T> &x);

void val_write(const std::string& x);

template<typename T>
void val_write(const T& x);

template<typename T, std::size_t S>
void val_write(const std::array<T, S> &x) {
    std::cout << "[ ";
    for (int i = 0; i < S; ++i) {
        val_write(x[i]);
        if (i != S - 1) std::cout << ", ";
    }
    std::cout << " ]";
}

template<typename F, typename S>
void val_write(const std::map<F, S> &x) {
    std::cout << "{ ";
    int i = x.size();
    for (auto &[f, s]: x) {
        val_write(f);
        std::cout << " : ";
        val_write(s);
        if (i != 1) std::cout << ", ";
        --i;
    }
    std::cout << " }";
}

template<typename T>
void val_write(const std::vector<T> &x) {
    std::cout << "[ ";
    for (int i = 0; i < x.size(); ++i) {
        val_write(x[i]);
        if (i != x.size() - 1) std::cout << ", ";
    }
    std::cout << " ]";
}

template<typename F, typename S>
void val_write(const std::pair<F, S> &x) {
    std::cout << "<";
    val_write(x.first);
    std::cout << ", ";
    val_write(x.second);
    std::cout << ">";
}

template<typename T>
void val_write(const std::set<T> &x) {
    std::cout << "{ ";
    for (int i = 0; i < x.size(); ++i) {
        val_write(*std::next(x.begin(), i));
        if (i != x.size() - 1) std::cout << ", ";
    }
    std::cout << " }";
}

void val_write(const std::string& x){
    std::cout << "\"";
    std::cout << x;
    std::cout << "\"";
}

template<typename T>
void val_write(const T& x) {
    std::cout << x;
}

template<typename T>
void write(const T& x) {
    val_write(x);
}

template<typename T, typename ... Ts>
void write(const T& x, const Ts &... rest) {
    val_write(x);
    std::cout << " | ";
    write(rest...);
}