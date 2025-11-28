//
// Created by AYssu on 2025/05/07
//
#ifndef Sea_3_H
#define Sea_3_H

#include <chrono>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
#include <unordered_map>

#include <sstream>

#include <cstdio>
#include <cstring>
#include <set>
#include <sys/wait.h>
#include <unordered_map>
#include <vector>


#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
#include <type_traits>

// some color for you color your termux
#define s_black        "\033[1;30m"
#define s_dark_gray    "\033[1;30m"
#define s_blue         "\033[1;34m"
#define s_light_blue   "\033[1;34m"
#define s_green        "\033[1;32m"
#define s_light_green  "\033[1;32m"
#define s_cyan         "\033[1;36m"
#define s_light_cyan   "\033[1;36m"
#define s_red          "\033[1;31m"
#define s_light_red    "\033[1;31m"
#define s_purple       "\033[1;35m"
#define s_light_purple "\033[1;35m"
#define s_brown        "\033[1;33m"
#define s_yellow       "\033[1;33m"
#define s_white        "\033[1;37m"


namespace sutils {
    /**
     * 读取文件
     * @param path 文件路径
     * @return 文件内容
     */
    std::string read_file(const std::string &path);

    /**
     * 写入文件
     * @param path 文件路径
     * @param str 文件内容
     * @return 写入的字节数
     */
    size_t write_file(const std::string &path, const std::string &str);

    /**
     * 将字符串转换为整数向量
     * @param input 字符串
     * @return 整数向量
     */
    std::vector<int> convert_to_int_vector(const std::string &input);

    
}

namespace custom_sutils {
    /**
     * 获取用户输入的整数
     * @param msg 提示信息
     * @return 用户输入的整数
     */
    int get_input_int(const std::string &msg);

    /**
     * 获取用户输入的字符串
     * @param msg
     * @return 用户输入的字符串
     */
    std::string get_input_string(const std::string &msg);

    /**
     * 获取用户输入的无符号整数
     * @param msg 提示信息
     * @return 用户输入的无符号整数
     */
    uintptr_t get_input_uintptr_t(const std::string &msg);// 获取用户输入的无符号整数
}



namespace sutils {

    time_t get_timestamp();// get timestamp

    std::string base64_encode(const std::string &input, const std::string &base64_table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");// base64 encode
    std::string base64_decode(const std::string &input, const std::string &base64_table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");// base64 decode

    std::string obfuscator(const std::string &origin, const std::string &key = "."); // obfuscator string

    std::string to_hex(const std::string &origin, bool uppercase = false);// hex
    std::string hex_to_string(const std::string &origin);                 // hex

    std::string to_md5(const std::string &origin, bool uppercase = false);// md5
    std::string sha256(const std::string &input, bool uppercase = false); // SHA-256

    std::string rc4_crypt(const std::string &data, const std::string &key);// RC4

    std::string aes128_encrypt(const std::string &data, const std::string &key);
    std::string aes128_decrypt(const std::string &data, const std::string &key);

    std::string pem_format(const std::string &key, bool private_ = false);                      // pem format
    std::string rsa_public_encrypt(const std::string &clear_text, const std::string &pub_key);  // rsa encrypt
    std::string rsa_private_decrypt(const std::string &cipher_text, const std::string &pri_key);// rsa decrypt
    std::string rsa_public_decrypt(const std::string &cipher_text, const std::string &pub_key); // rsa decrypt
    std::string rsa_private_encrypt(const std::string &clear_text, const std::string &pri_key); // rsa encrypt

    std::string execute_shell_command(const std::string &command);// execute shell command return
    std::string get_imei(int result = 1,bool log = false);                                       // result: 1:默认hex->md5 2.hex->sha256 3.base64 log:是否打印日志
    
    std::string format_local_datetime(const std::string &pattern = "%Y%m%d%H");
    
    void string_to_uintptr(uintptr_t &variable,const std::string &hex_str); // 将十六进制字符串转换为无符号整数
    void string_to_long(long &variable,const std::string &hex_str);// 将十六进制字符串转换为长整数
    
    void string_load_vector(std::vector<uintptr_t> &vec, const std::string &str); // 将字符串转换vector
    void string_load_vector(std::vector<long> &vec, const std::string &str); // 将字符串转换vector
    void string_load_vector(std::vector<int> &vec, const std::string &str); // 将字符串转换vector
    void string_load_vector(std::vector<float> &vec, const std::string &str); // 将字符串转换vector

}// namespace utils

#endif//Sea_3_H
