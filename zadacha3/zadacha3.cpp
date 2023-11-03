#include <iostream>

int main()
{
    const char* elemetns [100]{
        "auto",
        "double",
        "break",
        "else",
        "case",
        "enum",
        "char",
        "extern",
        "const",
        "float",
        "continue",
        "for",
        "default",
        "goto",
        "do",
        "if",
        "int",
        "long",
        "register",
        "return",
        "short",
        "signed",
        "sizeof",
        "static",
        "struct",
        "switch",
        "typedef",
        "union",
        "unsigned",
        "void",
        "volatile",
        "while",
        "asm",
        "bool",
        "catch",
        "class",
        "const_cast",
        "delete",
        "dynamic_cast",
        "explicit",
        "false",
        "friend",
        "inline",
        "mutable",
        "namespace",
        "new",
        "operator",
        "private",
        "protected",
        "public",
        "reinterpret_",
        "cast",
        "static_cast",
        "template",
        "this",
        "throw",
        "true",
        "try",
        "typeid",
        "typename",
        "using",
        "virtual",
        "wchar_t"
    };

    for (int i = 0; i < 100; i++)
    {
        if (elemetns[i] == NULL)
            break;
        else
            std::cout << elemetns[i] << std::endl;

        return 0;
    }
}
