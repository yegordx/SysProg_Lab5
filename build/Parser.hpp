// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file Parser.hpp
 ** Define the parsing::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
// "%code requires" blocks.
#line 22 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"

    #include <memory>
    #include "ast/TreeNode.hpp"

    namespace parsing {
        class Scanner;
    } // namespace parsing

#line 58 "Parser.hpp"


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif



#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 16 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
namespace parsing {
#line 194 "Parser.hpp"




  /// A Bison parser.
  class Parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
    {
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {}

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // IDENTIFIER
      // STRING
      // INTEGER_CONSTANT
      // FLOATING_CONSTANT
      char dummy1[sizeof (std::string)];

      // external_declaration_list
      // external_declaration
      // function_definition
      // declaration
      // declaration_specifiers
      // declarator
      // declaration_list
      // compound_statement
      // init_declarator_list
      // storage_class_specifier
      // type_specifier
      // type_qualifier
      // function_specifier
      // pointer
      // direct_declarator
      // block_item_list
      // init_declarator
      // type_qualifier_list
      // assignment_expression
      // parameter_type_list
      // identifier_list
      // block_item
      // initializer
      // conditional_expression
      // unary_expression
      // assignment_operator
      // parameter_list
      // statement
      // initializer_list
      // logical_or_expression
      // postfix_expression
      // unary_operator
      // cast_expression
      // type_name
      // parameter_declaration
      // labeled_statement
      // expression_statement
      // selection_statement
      // iteration_statement
      // jump_statement
      // designation
      // logical_and_expression
      // primary_expression
      // expression
      // argument_expression_list
      // specifier_qualifier_list
      // abstract_declarator
      // constant_expression
      // designator_list
      // inclusive_or_expression
      // constant
      // direct_abstract_declarator
      // designator
      // exclusive_or_expression
      // and_expression
      // equality_expression
      // relational_expression
      // shift_expression
      // additive_expression
      // multiplicative_expression
      // struct_or_union_specifier
      // struct_or_union
      // struct_declaration_list
      // struct_declaration
      // struct_declarator_list
      // struct_declarator
      // enum_specifier
      // enumerator_list
      // enumerator
      char dummy2[sizeof (std::unique_ptr<ast::TreeNode>)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;


    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    COMMA = 258,                   // ","
    COLON = 259,                   // ":"
    SEMICOLON = 260,               // ";"
    LBRACE = 261,                  // "{"
    RBRACE = 262,                  // "}"
    LPAREN = 263,                  // "("
    RPAREN = 264,                  // ")"
    LSBRACKET = 265,               // "["
    RSBRACKET = 266,               // "]"
    QUESTION = 267,                // "?"
    POINT = 268,                   // "."
    ARROW = 269,                   // "->"
    ELLIPSIS = 270,                // "..."
    PLUS = 271,                    // "+"
    MINUS = 272,                   // "-"
    ASTERISK = 273,                // "*"
    SLASH = 274,                   // "/"
    PERCENT = 275,                 // "%"
    INCREMENT = 276,               // "++"
    DECREMENT = 277,               // "--"
    LNOT = 278,                    // "!"
    LOR = 279,                     // "||"
    LAND = 280,                    // "&&"
    EQUAL = 281,                   // "=="
    NEQUAL = 282,                  // "!="
    LESS = 283,                    // "<"
    GREATER = 284,                 // ">"
    LEQUAL = 285,                  // "<="
    GEQUAL = 286,                  // ">="
    BOR = 287,                     // "|"
    BAND = 288,                    // "&"
    BXOR = 289,                    // "^"
    BINV = 290,                    // "~"
    LSHIFT = 291,                  // "<<"
    RSHIFT = 292,                  // ">>"
    ASSIGNMENT = 293,              // "="
    MUL_ASSIGNMENT = 294,          // "*="
    DIV_ASSIGNMENT = 295,          // "/="
    MOD_ASSIGNMENT = 296,          // "%="
    PLUS_ASSIGNMENT = 297,         // "+="
    MINUS_ASSIGNMENT = 298,        // "-="
    LSHIFT_ASSIGNMENT = 299,       // "<<="
    RSHIFT_ASSIGNMENT = 300,       // ">>="
    BAND_ASSIGNMENT = 301,         // "&="
    BOR_ASSIGNMENT = 302,          // "|="
    BXOR_ASSIGNMENT = 303,         // "^="
    IDENTIFIER = 304,              // IDENTIFIER
    STRING = 305,                  // STRING
    INTEGER_CONSTANT = 306,        // INTEGER_CONSTANT
    FLOATING_CONSTANT = 307,       // FLOATING_CONSTANT
    AUTO = 308,                    // "auto"
    REGISTER = 309,                // "register"
    STATIC = 310,                  // "static"
    EXTERN = 311,                  // "extern"
    TYPEDEF = 312,                 // "typedef"
    STRUCT = 313,                  // "struct"
    UNION = 314,                   // "union"
    ENUM = 315,                    // "enum"
    CASE = 316,                    // "case"
    DEFAULT = 317,                 // "default"
    IF = 318,                      // "if"
    ELSE = 319,                    // "else"
    SWITCH = 320,                  // "switch"
    WHILE = 321,                   // "while"
    DO = 322,                      // "do"
    FOR = 323,                     // "for"
    GOTO = 324,                    // "goto"
    CONTINUE = 325,                // "continue"
    BREAK = 326,                   // "break"
    RETURN = 327,                  // "return"
    CONST = 328,                   // "const"
    VOLATILE = 329,                // "volatile"
    RESTRICT = 330,                // "restrict"
    INLINE = 331,                  // "inline"
    VOID = 332,                    // "void"
    CHAR = 333,                    // "char"
    SHORT = 334,                   // "short"
    INT = 335,                     // "int"
    LONG = 336,                    // "long"
    FLOAT = 337,                   // "float"
    DOUBLE = 338,                  // "double"
    SIGNED = 339,                  // "signed"
    UNSIGNED = 340,                // "unsigned"
    BOOL = 341,                    // "bool"
    SIZEOF = 342                   // "sizeof"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 88, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_COMMA = 3,                             // ","
        S_COLON = 4,                             // ":"
        S_SEMICOLON = 5,                         // ";"
        S_LBRACE = 6,                            // "{"
        S_RBRACE = 7,                            // "}"
        S_LPAREN = 8,                            // "("
        S_RPAREN = 9,                            // ")"
        S_LSBRACKET = 10,                        // "["
        S_RSBRACKET = 11,                        // "]"
        S_QUESTION = 12,                         // "?"
        S_POINT = 13,                            // "."
        S_ARROW = 14,                            // "->"
        S_ELLIPSIS = 15,                         // "..."
        S_PLUS = 16,                             // "+"
        S_MINUS = 17,                            // "-"
        S_ASTERISK = 18,                         // "*"
        S_SLASH = 19,                            // "/"
        S_PERCENT = 20,                          // "%"
        S_INCREMENT = 21,                        // "++"
        S_DECREMENT = 22,                        // "--"
        S_LNOT = 23,                             // "!"
        S_LOR = 24,                              // "||"
        S_LAND = 25,                             // "&&"
        S_EQUAL = 26,                            // "=="
        S_NEQUAL = 27,                           // "!="
        S_LESS = 28,                             // "<"
        S_GREATER = 29,                          // ">"
        S_LEQUAL = 30,                           // "<="
        S_GEQUAL = 31,                           // ">="
        S_BOR = 32,                              // "|"
        S_BAND = 33,                             // "&"
        S_BXOR = 34,                             // "^"
        S_BINV = 35,                             // "~"
        S_LSHIFT = 36,                           // "<<"
        S_RSHIFT = 37,                           // ">>"
        S_ASSIGNMENT = 38,                       // "="
        S_MUL_ASSIGNMENT = 39,                   // "*="
        S_DIV_ASSIGNMENT = 40,                   // "/="
        S_MOD_ASSIGNMENT = 41,                   // "%="
        S_PLUS_ASSIGNMENT = 42,                  // "+="
        S_MINUS_ASSIGNMENT = 43,                 // "-="
        S_LSHIFT_ASSIGNMENT = 44,                // "<<="
        S_RSHIFT_ASSIGNMENT = 45,                // ">>="
        S_BAND_ASSIGNMENT = 46,                  // "&="
        S_BOR_ASSIGNMENT = 47,                   // "|="
        S_BXOR_ASSIGNMENT = 48,                  // "^="
        S_IDENTIFIER = 49,                       // IDENTIFIER
        S_STRING = 50,                           // STRING
        S_INTEGER_CONSTANT = 51,                 // INTEGER_CONSTANT
        S_FLOATING_CONSTANT = 52,                // FLOATING_CONSTANT
        S_AUTO = 53,                             // "auto"
        S_REGISTER = 54,                         // "register"
        S_STATIC = 55,                           // "static"
        S_EXTERN = 56,                           // "extern"
        S_TYPEDEF = 57,                          // "typedef"
        S_STRUCT = 58,                           // "struct"
        S_UNION = 59,                            // "union"
        S_ENUM = 60,                             // "enum"
        S_CASE = 61,                             // "case"
        S_DEFAULT = 62,                          // "default"
        S_IF = 63,                               // "if"
        S_ELSE = 64,                             // "else"
        S_SWITCH = 65,                           // "switch"
        S_WHILE = 66,                            // "while"
        S_DO = 67,                               // "do"
        S_FOR = 68,                              // "for"
        S_GOTO = 69,                             // "goto"
        S_CONTINUE = 70,                         // "continue"
        S_BREAK = 71,                            // "break"
        S_RETURN = 72,                           // "return"
        S_CONST = 73,                            // "const"
        S_VOLATILE = 74,                         // "volatile"
        S_RESTRICT = 75,                         // "restrict"
        S_INLINE = 76,                           // "inline"
        S_VOID = 77,                             // "void"
        S_CHAR = 78,                             // "char"
        S_SHORT = 79,                            // "short"
        S_INT = 80,                              // "int"
        S_LONG = 81,                             // "long"
        S_FLOAT = 82,                            // "float"
        S_DOUBLE = 83,                           // "double"
        S_SIGNED = 84,                           // "signed"
        S_UNSIGNED = 85,                         // "unsigned"
        S_BOOL = 86,                             // "bool"
        S_SIZEOF = 87,                           // "sizeof"
        S_YYACCEPT = 88,                         // $accept
        S_translation_unit = 89,                 // translation_unit
        S_external_declaration_list = 90,        // external_declaration_list
        S_external_declaration = 91,             // external_declaration
        S_function_definition = 92,              // function_definition
        S_declaration = 93,                      // declaration
        S_declaration_specifiers = 94,           // declaration_specifiers
        S_declarator = 95,                       // declarator
        S_declaration_list = 96,                 // declaration_list
        S_compound_statement = 97,               // compound_statement
        S_init_declarator_list = 98,             // init_declarator_list
        S_storage_class_specifier = 99,          // storage_class_specifier
        S_type_specifier = 100,                  // type_specifier
        S_type_qualifier = 101,                  // type_qualifier
        S_function_specifier = 102,              // function_specifier
        S_pointer = 103,                         // pointer
        S_direct_declarator = 104,               // direct_declarator
        S_block_item_list = 105,                 // block_item_list
        S_init_declarator = 106,                 // init_declarator
        S_type_qualifier_list = 107,             // type_qualifier_list
        S_assignment_expression = 108,           // assignment_expression
        S_parameter_type_list = 109,             // parameter_type_list
        S_identifier_list = 110,                 // identifier_list
        S_block_item = 111,                      // block_item
        S_initializer = 112,                     // initializer
        S_conditional_expression = 113,          // conditional_expression
        S_unary_expression = 114,                // unary_expression
        S_assignment_operator = 115,             // assignment_operator
        S_parameter_list = 116,                  // parameter_list
        S_statement = 117,                       // statement
        S_initializer_list = 118,                // initializer_list
        S_logical_or_expression = 119,           // logical_or_expression
        S_postfix_expression = 120,              // postfix_expression
        S_unary_operator = 121,                  // unary_operator
        S_cast_expression = 122,                 // cast_expression
        S_type_name = 123,                       // type_name
        S_parameter_declaration = 124,           // parameter_declaration
        S_labeled_statement = 125,               // labeled_statement
        S_expression_statement = 126,            // expression_statement
        S_selection_statement = 127,             // selection_statement
        S_iteration_statement = 128,             // iteration_statement
        S_jump_statement = 129,                  // jump_statement
        S_designation = 130,                     // designation
        S_logical_and_expression = 131,          // logical_and_expression
        S_primary_expression = 132,              // primary_expression
        S_expression = 133,                      // expression
        S_argument_expression_list = 134,        // argument_expression_list
        S_specifier_qualifier_list = 135,        // specifier_qualifier_list
        S_abstract_declarator = 136,             // abstract_declarator
        S_constant_expression = 137,             // constant_expression
        S_designator_list = 138,                 // designator_list
        S_inclusive_or_expression = 139,         // inclusive_or_expression
        S_constant = 140,                        // constant
        S_direct_abstract_declarator = 141,      // direct_abstract_declarator
        S_designator = 142,                      // designator
        S_exclusive_or_expression = 143,         // exclusive_or_expression
        S_and_expression = 144,                  // and_expression
        S_equality_expression = 145,             // equality_expression
        S_relational_expression = 146,           // relational_expression
        S_shift_expression = 147,                // shift_expression
        S_additive_expression = 148,             // additive_expression
        S_multiplicative_expression = 149,       // multiplicative_expression
        S_struct_or_union_specifier = 150,       // struct_or_union_specifier
        S_struct_or_union = 151,                 // struct_or_union
        S_struct_declaration_list = 152,         // struct_declaration_list
        S_struct_declaration = 153,              // struct_declaration
        S_struct_declarator_list = 154,          // struct_declarator_list
        S_struct_declarator = 155,               // struct_declarator
        S_enum_specifier = 156,                  // enum_specifier
        S_enumerator_list = 157,                 // enumerator_list
        S_enumerator = 158                       // enumerator
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
      {
        switch (this->kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.move< std::string > (std::move (that.value));
        break;

      case symbol_kind::S_external_declaration_list: // external_declaration_list
      case symbol_kind::S_external_declaration: // external_declaration
      case symbol_kind::S_function_definition: // function_definition
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_declaration_specifiers: // declaration_specifiers
      case symbol_kind::S_declarator: // declarator
      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_compound_statement: // compound_statement
      case symbol_kind::S_init_declarator_list: // init_declarator_list
      case symbol_kind::S_storage_class_specifier: // storage_class_specifier
      case symbol_kind::S_type_specifier: // type_specifier
      case symbol_kind::S_type_qualifier: // type_qualifier
      case symbol_kind::S_function_specifier: // function_specifier
      case symbol_kind::S_pointer: // pointer
      case symbol_kind::S_direct_declarator: // direct_declarator
      case symbol_kind::S_block_item_list: // block_item_list
      case symbol_kind::S_init_declarator: // init_declarator
      case symbol_kind::S_type_qualifier_list: // type_qualifier_list
      case symbol_kind::S_assignment_expression: // assignment_expression
      case symbol_kind::S_parameter_type_list: // parameter_type_list
      case symbol_kind::S_identifier_list: // identifier_list
      case symbol_kind::S_block_item: // block_item
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_conditional_expression: // conditional_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_assignment_operator: // assignment_operator
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_initializer_list: // initializer_list
      case symbol_kind::S_logical_or_expression: // logical_or_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_unary_operator: // unary_operator
      case symbol_kind::S_cast_expression: // cast_expression
      case symbol_kind::S_type_name: // type_name
      case symbol_kind::S_parameter_declaration: // parameter_declaration
      case symbol_kind::S_labeled_statement: // labeled_statement
      case symbol_kind::S_expression_statement: // expression_statement
      case symbol_kind::S_selection_statement: // selection_statement
      case symbol_kind::S_iteration_statement: // iteration_statement
      case symbol_kind::S_jump_statement: // jump_statement
      case symbol_kind::S_designation: // designation
      case symbol_kind::S_logical_and_expression: // logical_and_expression
      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_argument_expression_list: // argument_expression_list
      case symbol_kind::S_specifier_qualifier_list: // specifier_qualifier_list
      case symbol_kind::S_abstract_declarator: // abstract_declarator
      case symbol_kind::S_constant_expression: // constant_expression
      case symbol_kind::S_designator_list: // designator_list
      case symbol_kind::S_inclusive_or_expression: // inclusive_or_expression
      case symbol_kind::S_constant: // constant
      case symbol_kind::S_direct_abstract_declarator: // direct_abstract_declarator
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_exclusive_or_expression: // exclusive_or_expression
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_equality_expression: // equality_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_shift_expression: // shift_expression
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_struct_or_union_specifier: // struct_or_union_specifier
      case symbol_kind::S_struct_or_union: // struct_or_union
      case symbol_kind::S_struct_declaration_list: // struct_declaration_list
      case symbol_kind::S_struct_declaration: // struct_declaration
      case symbol_kind::S_struct_declarator_list: // struct_declarator_list
      case symbol_kind::S_struct_declarator: // struct_declarator
      case symbol_kind::S_enum_specifier: // enum_specifier
      case symbol_kind::S_enumerator_list: // enumerator_list
      case symbol_kind::S_enumerator: // enumerator
        value.move< std::unique_ptr<ast::TreeNode> > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#else
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::unique_ptr<ast::TreeNode>&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::unique_ptr<ast::TreeNode>& v)
        : Base (t)
        , value (v)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.template destroy< std::string > ();
        break;

      case symbol_kind::S_external_declaration_list: // external_declaration_list
      case symbol_kind::S_external_declaration: // external_declaration
      case symbol_kind::S_function_definition: // function_definition
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_declaration_specifiers: // declaration_specifiers
      case symbol_kind::S_declarator: // declarator
      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_compound_statement: // compound_statement
      case symbol_kind::S_init_declarator_list: // init_declarator_list
      case symbol_kind::S_storage_class_specifier: // storage_class_specifier
      case symbol_kind::S_type_specifier: // type_specifier
      case symbol_kind::S_type_qualifier: // type_qualifier
      case symbol_kind::S_function_specifier: // function_specifier
      case symbol_kind::S_pointer: // pointer
      case symbol_kind::S_direct_declarator: // direct_declarator
      case symbol_kind::S_block_item_list: // block_item_list
      case symbol_kind::S_init_declarator: // init_declarator
      case symbol_kind::S_type_qualifier_list: // type_qualifier_list
      case symbol_kind::S_assignment_expression: // assignment_expression
      case symbol_kind::S_parameter_type_list: // parameter_type_list
      case symbol_kind::S_identifier_list: // identifier_list
      case symbol_kind::S_block_item: // block_item
      case symbol_kind::S_initializer: // initializer
      case symbol_kind::S_conditional_expression: // conditional_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_assignment_operator: // assignment_operator
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_initializer_list: // initializer_list
      case symbol_kind::S_logical_or_expression: // logical_or_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_unary_operator: // unary_operator
      case symbol_kind::S_cast_expression: // cast_expression
      case symbol_kind::S_type_name: // type_name
      case symbol_kind::S_parameter_declaration: // parameter_declaration
      case symbol_kind::S_labeled_statement: // labeled_statement
      case symbol_kind::S_expression_statement: // expression_statement
      case symbol_kind::S_selection_statement: // selection_statement
      case symbol_kind::S_iteration_statement: // iteration_statement
      case symbol_kind::S_jump_statement: // jump_statement
      case symbol_kind::S_designation: // designation
      case symbol_kind::S_logical_and_expression: // logical_and_expression
      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_argument_expression_list: // argument_expression_list
      case symbol_kind::S_specifier_qualifier_list: // specifier_qualifier_list
      case symbol_kind::S_abstract_declarator: // abstract_declarator
      case symbol_kind::S_constant_expression: // constant_expression
      case symbol_kind::S_designator_list: // designator_list
      case symbol_kind::S_inclusive_or_expression: // inclusive_or_expression
      case symbol_kind::S_constant: // constant
      case symbol_kind::S_direct_abstract_declarator: // direct_abstract_declarator
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_exclusive_or_expression: // exclusive_or_expression
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_equality_expression: // equality_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_shift_expression: // shift_expression
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_struct_or_union_specifier: // struct_or_union_specifier
      case symbol_kind::S_struct_or_union: // struct_or_union
      case symbol_kind::S_struct_declaration_list: // struct_declaration_list
      case symbol_kind::S_struct_declaration: // struct_declaration
      case symbol_kind::S_struct_declarator_list: // struct_declarator_list
      case symbol_kind::S_struct_declarator: // struct_declarator
      case symbol_kind::S_enum_specifier: // enum_specifier
      case symbol_kind::S_enumerator_list: // enumerator_list
      case symbol_kind::S_enumerator: // enumerator
        value.template destroy< std::unique_ptr<ast::TreeNode> > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      const char *name () const YY_NOEXCEPT
      {
        return Parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#else
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const std::string& v)
        : super_type (token_kind_type (tok), v)
#endif
      {}
    };

    /// Build a parser object.
    Parser (Scanner* scanner_yyarg, std::unique_ptr<ast::TreeNode> &ast_root_yyarg);
    virtual ~Parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    Parser (const Parser&) = delete;
    /// Non copyable.
    Parser& operator= (const Parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static const char *symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF ()
      {
        return symbol_type (token::YYEOF);
      }
#else
      static
      symbol_type
      make_YYEOF ()
      {
        return symbol_type (token::YYEOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror ()
      {
        return symbol_type (token::YYerror);
      }
#else
      static
      symbol_type
      make_YYerror ()
      {
        return symbol_type (token::YYerror);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF ()
      {
        return symbol_type (token::YYUNDEF);
      }
#else
      static
      symbol_type
      make_YYUNDEF ()
      {
        return symbol_type (token::YYUNDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#else
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON ()
      {
        return symbol_type (token::COLON);
      }
#else
      static
      symbol_type
      make_COLON ()
      {
        return symbol_type (token::COLON);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#else
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRACE ()
      {
        return symbol_type (token::LBRACE);
      }
#else
      static
      symbol_type
      make_LBRACE ()
      {
        return symbol_type (token::LBRACE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRACE ()
      {
        return symbol_type (token::RBRACE);
      }
#else
      static
      symbol_type
      make_RBRACE ()
      {
        return symbol_type (token::RBRACE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPAREN ()
      {
        return symbol_type (token::LPAREN);
      }
#else
      static
      symbol_type
      make_LPAREN ()
      {
        return symbol_type (token::LPAREN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPAREN ()
      {
        return symbol_type (token::RPAREN);
      }
#else
      static
      symbol_type
      make_RPAREN ()
      {
        return symbol_type (token::RPAREN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSBRACKET ()
      {
        return symbol_type (token::LSBRACKET);
      }
#else
      static
      symbol_type
      make_LSBRACKET ()
      {
        return symbol_type (token::LSBRACKET);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSBRACKET ()
      {
        return symbol_type (token::RSBRACKET);
      }
#else
      static
      symbol_type
      make_RSBRACKET ()
      {
        return symbol_type (token::RSBRACKET);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_QUESTION ()
      {
        return symbol_type (token::QUESTION);
      }
#else
      static
      symbol_type
      make_QUESTION ()
      {
        return symbol_type (token::QUESTION);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_POINT ()
      {
        return symbol_type (token::POINT);
      }
#else
      static
      symbol_type
      make_POINT ()
      {
        return symbol_type (token::POINT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW ()
      {
        return symbol_type (token::ARROW);
      }
#else
      static
      symbol_type
      make_ARROW ()
      {
        return symbol_type (token::ARROW);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELLIPSIS ()
      {
        return symbol_type (token::ELLIPSIS);
      }
#else
      static
      symbol_type
      make_ELLIPSIS ()
      {
        return symbol_type (token::ELLIPSIS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS ()
      {
        return symbol_type (token::PLUS);
      }
#else
      static
      symbol_type
      make_PLUS ()
      {
        return symbol_type (token::PLUS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS ()
      {
        return symbol_type (token::MINUS);
      }
#else
      static
      symbol_type
      make_MINUS ()
      {
        return symbol_type (token::MINUS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASTERISK ()
      {
        return symbol_type (token::ASTERISK);
      }
#else
      static
      symbol_type
      make_ASTERISK ()
      {
        return symbol_type (token::ASTERISK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SLASH ()
      {
        return symbol_type (token::SLASH);
      }
#else
      static
      symbol_type
      make_SLASH ()
      {
        return symbol_type (token::SLASH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERCENT ()
      {
        return symbol_type (token::PERCENT);
      }
#else
      static
      symbol_type
      make_PERCENT ()
      {
        return symbol_type (token::PERCENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INCREMENT ()
      {
        return symbol_type (token::INCREMENT);
      }
#else
      static
      symbol_type
      make_INCREMENT ()
      {
        return symbol_type (token::INCREMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DECREMENT ()
      {
        return symbol_type (token::DECREMENT);
      }
#else
      static
      symbol_type
      make_DECREMENT ()
      {
        return symbol_type (token::DECREMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LNOT ()
      {
        return symbol_type (token::LNOT);
      }
#else
      static
      symbol_type
      make_LNOT ()
      {
        return symbol_type (token::LNOT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOR ()
      {
        return symbol_type (token::LOR);
      }
#else
      static
      symbol_type
      make_LOR ()
      {
        return symbol_type (token::LOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LAND ()
      {
        return symbol_type (token::LAND);
      }
#else
      static
      symbol_type
      make_LAND ()
      {
        return symbol_type (token::LAND);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQUAL ()
      {
        return symbol_type (token::EQUAL);
      }
#else
      static
      symbol_type
      make_EQUAL ()
      {
        return symbol_type (token::EQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEQUAL ()
      {
        return symbol_type (token::NEQUAL);
      }
#else
      static
      symbol_type
      make_NEQUAL ()
      {
        return symbol_type (token::NEQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS ()
      {
        return symbol_type (token::LESS);
      }
#else
      static
      symbol_type
      make_LESS ()
      {
        return symbol_type (token::LESS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER ()
      {
        return symbol_type (token::GREATER);
      }
#else
      static
      symbol_type
      make_GREATER ()
      {
        return symbol_type (token::GREATER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEQUAL ()
      {
        return symbol_type (token::LEQUAL);
      }
#else
      static
      symbol_type
      make_LEQUAL ()
      {
        return symbol_type (token::LEQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GEQUAL ()
      {
        return symbol_type (token::GEQUAL);
      }
#else
      static
      symbol_type
      make_GEQUAL ()
      {
        return symbol_type (token::GEQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOR ()
      {
        return symbol_type (token::BOR);
      }
#else
      static
      symbol_type
      make_BOR ()
      {
        return symbol_type (token::BOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BAND ()
      {
        return symbol_type (token::BAND);
      }
#else
      static
      symbol_type
      make_BAND ()
      {
        return symbol_type (token::BAND);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BXOR ()
      {
        return symbol_type (token::BXOR);
      }
#else
      static
      symbol_type
      make_BXOR ()
      {
        return symbol_type (token::BXOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BINV ()
      {
        return symbol_type (token::BINV);
      }
#else
      static
      symbol_type
      make_BINV ()
      {
        return symbol_type (token::BINV);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSHIFT ()
      {
        return symbol_type (token::LSHIFT);
      }
#else
      static
      symbol_type
      make_LSHIFT ()
      {
        return symbol_type (token::LSHIFT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSHIFT ()
      {
        return symbol_type (token::RSHIFT);
      }
#else
      static
      symbol_type
      make_RSHIFT ()
      {
        return symbol_type (token::RSHIFT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGNMENT ()
      {
        return symbol_type (token::ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_ASSIGNMENT ()
      {
        return symbol_type (token::ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MUL_ASSIGNMENT ()
      {
        return symbol_type (token::MUL_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_MUL_ASSIGNMENT ()
      {
        return symbol_type (token::MUL_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV_ASSIGNMENT ()
      {
        return symbol_type (token::DIV_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_DIV_ASSIGNMENT ()
      {
        return symbol_type (token::DIV_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD_ASSIGNMENT ()
      {
        return symbol_type (token::MOD_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_MOD_ASSIGNMENT ()
      {
        return symbol_type (token::MOD_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_ASSIGNMENT ()
      {
        return symbol_type (token::PLUS_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_PLUS_ASSIGNMENT ()
      {
        return symbol_type (token::PLUS_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_ASSIGNMENT ()
      {
        return symbol_type (token::MINUS_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_MINUS_ASSIGNMENT ()
      {
        return symbol_type (token::MINUS_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSHIFT_ASSIGNMENT ()
      {
        return symbol_type (token::LSHIFT_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_LSHIFT_ASSIGNMENT ()
      {
        return symbol_type (token::LSHIFT_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSHIFT_ASSIGNMENT ()
      {
        return symbol_type (token::RSHIFT_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_RSHIFT_ASSIGNMENT ()
      {
        return symbol_type (token::RSHIFT_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BAND_ASSIGNMENT ()
      {
        return symbol_type (token::BAND_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_BAND_ASSIGNMENT ()
      {
        return symbol_type (token::BAND_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOR_ASSIGNMENT ()
      {
        return symbol_type (token::BOR_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_BOR_ASSIGNMENT ()
      {
        return symbol_type (token::BOR_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BXOR_ASSIGNMENT ()
      {
        return symbol_type (token::BXOR_ASSIGNMENT);
      }
#else
      static
      symbol_type
      make_BXOR_ASSIGNMENT ()
      {
        return symbol_type (token::BXOR_ASSIGNMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER (std::string v)
      {
        return symbol_type (token::IDENTIFIER, std::move (v));
      }
#else
      static
      symbol_type
      make_IDENTIFIER (const std::string& v)
      {
        return symbol_type (token::IDENTIFIER, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (std::string v)
      {
        return symbol_type (token::STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_STRING (const std::string& v)
      {
        return symbol_type (token::STRING, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTEGER_CONSTANT (std::string v)
      {
        return symbol_type (token::INTEGER_CONSTANT, std::move (v));
      }
#else
      static
      symbol_type
      make_INTEGER_CONSTANT (const std::string& v)
      {
        return symbol_type (token::INTEGER_CONSTANT, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOATING_CONSTANT (std::string v)
      {
        return symbol_type (token::FLOATING_CONSTANT, std::move (v));
      }
#else
      static
      symbol_type
      make_FLOATING_CONSTANT (const std::string& v)
      {
        return symbol_type (token::FLOATING_CONSTANT, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AUTO ()
      {
        return symbol_type (token::AUTO);
      }
#else
      static
      symbol_type
      make_AUTO ()
      {
        return symbol_type (token::AUTO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REGISTER ()
      {
        return symbol_type (token::REGISTER);
      }
#else
      static
      symbol_type
      make_REGISTER ()
      {
        return symbol_type (token::REGISTER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC ()
      {
        return symbol_type (token::STATIC);
      }
#else
      static
      symbol_type
      make_STATIC ()
      {
        return symbol_type (token::STATIC);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXTERN ()
      {
        return symbol_type (token::EXTERN);
      }
#else
      static
      symbol_type
      make_EXTERN ()
      {
        return symbol_type (token::EXTERN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPEDEF ()
      {
        return symbol_type (token::TYPEDEF);
      }
#else
      static
      symbol_type
      make_TYPEDEF ()
      {
        return symbol_type (token::TYPEDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRUCT ()
      {
        return symbol_type (token::STRUCT);
      }
#else
      static
      symbol_type
      make_STRUCT ()
      {
        return symbol_type (token::STRUCT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNION ()
      {
        return symbol_type (token::UNION);
      }
#else
      static
      symbol_type
      make_UNION ()
      {
        return symbol_type (token::UNION);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ENUM ()
      {
        return symbol_type (token::ENUM);
      }
#else
      static
      symbol_type
      make_ENUM ()
      {
        return symbol_type (token::ENUM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CASE ()
      {
        return symbol_type (token::CASE);
      }
#else
      static
      symbol_type
      make_CASE ()
      {
        return symbol_type (token::CASE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT ()
      {
        return symbol_type (token::DEFAULT);
      }
#else
      static
      symbol_type
      make_DEFAULT ()
      {
        return symbol_type (token::DEFAULT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF ()
      {
        return symbol_type (token::IF);
      }
#else
      static
      symbol_type
      make_IF ()
      {
        return symbol_type (token::IF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE ()
      {
        return symbol_type (token::ELSE);
      }
#else
      static
      symbol_type
      make_ELSE ()
      {
        return symbol_type (token::ELSE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SWITCH ()
      {
        return symbol_type (token::SWITCH);
      }
#else
      static
      symbol_type
      make_SWITCH ()
      {
        return symbol_type (token::SWITCH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE ()
      {
        return symbol_type (token::WHILE);
      }
#else
      static
      symbol_type
      make_WHILE ()
      {
        return symbol_type (token::WHILE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DO ()
      {
        return symbol_type (token::DO);
      }
#else
      static
      symbol_type
      make_DO ()
      {
        return symbol_type (token::DO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR ()
      {
        return symbol_type (token::FOR);
      }
#else
      static
      symbol_type
      make_FOR ()
      {
        return symbol_type (token::FOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GOTO ()
      {
        return symbol_type (token::GOTO);
      }
#else
      static
      symbol_type
      make_GOTO ()
      {
        return symbol_type (token::GOTO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE ()
      {
        return symbol_type (token::CONTINUE);
      }
#else
      static
      symbol_type
      make_CONTINUE ()
      {
        return symbol_type (token::CONTINUE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK ()
      {
        return symbol_type (token::BREAK);
      }
#else
      static
      symbol_type
      make_BREAK ()
      {
        return symbol_type (token::BREAK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN ()
      {
        return symbol_type (token::RETURN);
      }
#else
      static
      symbol_type
      make_RETURN ()
      {
        return symbol_type (token::RETURN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST ()
      {
        return symbol_type (token::CONST);
      }
#else
      static
      symbol_type
      make_CONST ()
      {
        return symbol_type (token::CONST);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOLATILE ()
      {
        return symbol_type (token::VOLATILE);
      }
#else
      static
      symbol_type
      make_VOLATILE ()
      {
        return symbol_type (token::VOLATILE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RESTRICT ()
      {
        return symbol_type (token::RESTRICT);
      }
#else
      static
      symbol_type
      make_RESTRICT ()
      {
        return symbol_type (token::RESTRICT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INLINE ()
      {
        return symbol_type (token::INLINE);
      }
#else
      static
      symbol_type
      make_INLINE ()
      {
        return symbol_type (token::INLINE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOID ()
      {
        return symbol_type (token::VOID);
      }
#else
      static
      symbol_type
      make_VOID ()
      {
        return symbol_type (token::VOID);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR ()
      {
        return symbol_type (token::CHAR);
      }
#else
      static
      symbol_type
      make_CHAR ()
      {
        return symbol_type (token::CHAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SHORT ()
      {
        return symbol_type (token::SHORT);
      }
#else
      static
      symbol_type
      make_SHORT ()
      {
        return symbol_type (token::SHORT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT ()
      {
        return symbol_type (token::INT);
      }
#else
      static
      symbol_type
      make_INT ()
      {
        return symbol_type (token::INT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONG ()
      {
        return symbol_type (token::LONG);
      }
#else
      static
      symbol_type
      make_LONG ()
      {
        return symbol_type (token::LONG);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT ()
      {
        return symbol_type (token::FLOAT);
      }
#else
      static
      symbol_type
      make_FLOAT ()
      {
        return symbol_type (token::FLOAT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE ()
      {
        return symbol_type (token::DOUBLE);
      }
#else
      static
      symbol_type
      make_DOUBLE ()
      {
        return symbol_type (token::DOUBLE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIGNED ()
      {
        return symbol_type (token::SIGNED);
      }
#else
      static
      symbol_type
      make_SIGNED ()
      {
        return symbol_type (token::SIGNED);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNSIGNED ()
      {
        return symbol_type (token::UNSIGNED);
      }
#else
      static
      symbol_type
      make_UNSIGNED ()
      {
        return symbol_type (token::UNSIGNED);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOL ()
      {
        return symbol_type (token::BOOL);
      }
#else
      static
      symbol_type
      make_BOOL ()
      {
        return symbol_type (token::BOOL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIZEOF ()
      {
        return symbol_type (token::SIZEOF);
      }
#else
      static
      symbol_type
      make_SIZEOF ()
      {
        return symbol_type (token::SIZEOF);
      }
#endif


    class context
    {
    public:
      context (const Parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const Parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    Parser (const Parser&);
    /// Non copyable.
    Parser& operator= (const Parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;



    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const unsigned char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const unsigned char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 1791,     ///< Last index in yytable_.
      yynnts_ = 71,  ///< Number of nonterminal symbols.
      yyfinal_ = 3 ///< Termination state number.
    };


    // User arguments.
    Scanner* scanner;
    std::unique_ptr<ast::TreeNode> &ast_root;

  };


#line 16 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
} // parsing
#line 2838 "Parser.hpp"




#endif // !YY_YY_PARSER_HPP_INCLUDED
