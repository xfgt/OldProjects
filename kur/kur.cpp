#include <iostream>
int main() {
    std::cout << "Georgi Plamenov Iliev" << std::endl;
    std::cout << "Az ucha v New bulgarian University " << std::endl;
    std::string keyw[] = {
         "auto", "bitand", "bitor", "volatile", "wchar_t", "while", "xor", "xor_eq",
        "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t",
        "class", "compl", "concept", "const", "consteval", "constexpr", "const_cast",
        "continue", "co_await", "protected", "public", "register", "reinterpret_cast",
        "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern",
        "false", "float", "for", "friend", "goto", "if", "inline", "int", "long",
        "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator",
        "or", "or_eq", "private", "sizeof", "static", "static_assert",
        "requires", "return", "short", "signed","co_return", "co_yield", "decltype", "default", "delete",
        "static_cast", "struct", "switch", "synchronized", "template", "this", "thread_local",
        "throw", "true", "try", "typedef", "typeid", "typename", "union", "unsigned",
        "using", "virtual", "void","alignas", "alignof", "and", "and_eq", "asm" };
    int keywc = sizeof(keyw) / sizeof(keyw[0]);
    for (int i = 0; i < keywc; ++i) {
        std::cout << keyw[i] << "\n";
    }
    std::string wordexplain[] = {
        "Leksoma - predstavlqva fragment ot kod, koito ima opredelen smisul ili funkciq.",
        "Literalite sa konstantnite stoinosti, koito sa prisvoeni na konstantnite promenlivi.",
        "Komandata e instruktsiya v programniya kod, koyato ukazva na kompyutŭra kakvo da pravi. " };
    int wexample = sizeof(wordexplain) / sizeof(wordexplain[0]);
    for (int i = 0; i < wexample; ++i) {
        std::cout << wordexplain[i] << "\n";
    }
    return 0;
}