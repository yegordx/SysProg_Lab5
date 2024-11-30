// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

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

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 1 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"

#include <iostream>
#include <string>
#include <cmath>
#include <string>
#include <memory>
#include <FlexLexer.h>

#line 50 "Parser.cpp"


#include "Parser.hpp"


// Unqualified %code blocks.
#line 32 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"

    #include "Scanner.hpp"
    #define yylex(x) scanner->lex(x)

#line 62 "Parser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 16 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
namespace parsing {
#line 136 "Parser.cpp"

  /// Build a parser object.
  Parser::Parser (Scanner* scanner_yyarg, std::unique_ptr<ast::TreeNode> &ast_root_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      ast_root (ast_root_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
  {
    switch (this->kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.copy< std::string > (YY_MOVE (that.value));
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
        value.copy< std::unique_ptr<ast::TreeNode> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  Parser::symbol_kind_type
  Parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  Parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.move< std::string > (YY_MOVE (s.value));
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
        value.move< std::unique_ptr<ast::TreeNode> > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

  }

  // by_kind.
  Parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  Parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  Parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  Parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  Parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  Parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  Parser::symbol_kind_type
  Parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  Parser::symbol_kind_type
  Parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Parser::symbol_kind_type
  Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
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
        value.YY_MOVE_OR_COPY< std::unique_ptr<ast::TreeNode> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.move< std::string > (YY_MOVE (that.value));
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
        value.move< std::unique_ptr<ast::TreeNode> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.copy< std::string > (that.value);
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
        value.copy< std::unique_ptr<ast::TreeNode> > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        value.move< std::string > (that.value);
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
        value.move< std::unique_ptr<ast::TreeNode> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_INTEGER_CONSTANT: // INTEGER_CONSTANT
      case symbol_kind::S_FLOATING_CONSTANT: // FLOATING_CONSTANT
        yylhs.value.emplace< std::string > ();
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
        yylhs.value.emplace< std::unique_ptr<ast::TreeNode> > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // translation_unit: external_declaration_list
#line 208 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                    {
	    ast_root = std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ());
	}
#line 1167 "Parser.cpp"
    break;

  case 3: // external_declaration_list: %empty
#line 214 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
              {
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("translation_unit");
    }
#line 1175 "Parser.cpp"
    break;

  case 4: // external_declaration_list: external_declaration_list external_declaration
#line 217 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                     {
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("translation_unit");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
    }
#line 1185 "Parser.cpp"
    break;

  case 5: // external_declaration: function_definition
#line 225 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                              {
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("external_declaration");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
    }
#line 1194 "Parser.cpp"
    break;

  case 6: // external_declaration: declaration
#line 229 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                      {
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("external_declaration");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
    }
#line 1203 "Parser.cpp"
    break;

  case 7: // function_definition: declaration_specifiers declarator declaration_list compound_statement
#line 236 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                {
       yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("function_definition");
       yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
       yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
       yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
       yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
    }
#line 1215 "Parser.cpp"
    break;

  case 8: // function_definition: declaration_specifiers declarator compound_statement
#line 243 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                               {
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("function_definition");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
    }
#line 1226 "Parser.cpp"
    break;

  case 9: // declaration: declaration_specifiers ";"
#line 252 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                           {
	    yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration");
	    yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 1236 "Parser.cpp"
    break;

  case 10: // declaration: declaration_specifiers init_declarator_list ";"
#line 257 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 1247 "Parser.cpp"
    break;

  case 11: // declaration_specifiers: storage_class_specifier declaration_specifiers
#line 266 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1257 "Parser.cpp"
    break;

  case 12: // declaration_specifiers: storage_class_specifier
#line 271 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1266 "Parser.cpp"
    break;

  case 13: // declaration_specifiers: type_specifier declaration_specifiers
#line 275 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1276 "Parser.cpp"
    break;

  case 14: // declaration_specifiers: type_specifier
#line 280 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1285 "Parser.cpp"
    break;

  case 15: // declaration_specifiers: type_qualifier declaration_specifiers
#line 284 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1295 "Parser.cpp"
    break;

  case 16: // declaration_specifiers: type_qualifier
#line 289 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1304 "Parser.cpp"
    break;

  case 17: // declaration_specifiers: function_specifier declaration_specifiers
#line 293 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1314 "Parser.cpp"
    break;

  case 18: // declaration_specifiers: function_specifier
#line 298 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_specifiers");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1323 "Parser.cpp"
    break;

  case 19: // declarator: pointer direct_declarator
#line 305 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1333 "Parser.cpp"
    break;

  case 20: // declarator: direct_declarator
#line 310 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1342 "Parser.cpp"
    break;

  case 21: // declaration_list: declaration
#line 317 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1351 "Parser.cpp"
    break;

  case 22: // declaration_list: declaration_list declaration
#line 321 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("declaration_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1361 "Parser.cpp"
    break;

  case 23: // compound_statement: "{" "}"
#line 329 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("compound_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 1371 "Parser.cpp"
    break;

  case 24: // compound_statement: "{" block_item_list "}"
#line 334 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("compound_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 1382 "Parser.cpp"
    break;

  case 25: // init_declarator_list: init_declarator
#line 343 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("init_declarator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1391 "Parser.cpp"
    break;

  case 26: // init_declarator_list: init_declarator_list "," init_declarator
#line 347 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("init_declarator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1402 "Parser.cpp"
    break;

  case 27: // storage_class_specifier: "typedef"
#line 356 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("storage_class_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("typedef"));
	}
#line 1411 "Parser.cpp"
    break;

  case 28: // storage_class_specifier: "extern"
#line 360 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("storage_class_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("extern"));
	}
#line 1420 "Parser.cpp"
    break;

  case 29: // storage_class_specifier: "static"
#line 364 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("storage_class_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
	}
#line 1429 "Parser.cpp"
    break;

  case 30: // storage_class_specifier: "auto"
#line 368 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("storage_class_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("auto"));
	}
#line 1438 "Parser.cpp"
    break;

  case 31: // storage_class_specifier: "register"
#line 372 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("storage_class_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("register"));
	}
#line 1447 "Parser.cpp"
    break;

  case 32: // type_specifier: "void"
#line 379 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("void"));
	}
#line 1456 "Parser.cpp"
    break;

  case 33: // type_specifier: "char"
#line 383 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("char"));
	}
#line 1465 "Parser.cpp"
    break;

  case 34: // type_specifier: "short"
#line 387 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("short"));
	}
#line 1474 "Parser.cpp"
    break;

  case 35: // type_specifier: "int"
#line 391 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("int"));
	}
#line 1483 "Parser.cpp"
    break;

  case 36: // type_specifier: "long"
#line 395 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("long"));
	}
#line 1492 "Parser.cpp"
    break;

  case 37: // type_specifier: "float"
#line 399 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("float"));
	}
#line 1501 "Parser.cpp"
    break;

  case 38: // type_specifier: "double"
#line 403 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("double"));
	}
#line 1510 "Parser.cpp"
    break;

  case 39: // type_specifier: "signed"
#line 407 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("signed"));
	}
#line 1519 "Parser.cpp"
    break;

  case 40: // type_specifier: "unsigned"
#line 411 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("unsigned"));
	}
#line 1528 "Parser.cpp"
    break;

  case 41: // type_specifier: "bool"
#line 415 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("bool"));
	}
#line 1537 "Parser.cpp"
    break;

  case 42: // type_specifier: struct_or_union_specifier
#line 419 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1546 "Parser.cpp"
    break;

  case 43: // type_specifier: enum_specifier
#line 423 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1555 "Parser.cpp"
    break;

  case 44: // type_qualifier: "const"
#line 431 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_qualifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("const"));
	}
#line 1564 "Parser.cpp"
    break;

  case 45: // type_qualifier: "restrict"
#line 435 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_qualifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("restrict"));
	}
#line 1573 "Parser.cpp"
    break;

  case 46: // type_qualifier: "volatile"
#line 439 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_qualifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("volatile"));
	}
#line 1582 "Parser.cpp"
    break;

  case 47: // function_specifier: "inline"
#line 446 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("function_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("inline"));
	}
#line 1591 "Parser.cpp"
    break;

  case 48: // pointer: "*" type_qualifier_list pointer
#line 453 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("pointer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1602 "Parser.cpp"
    break;

  case 49: // pointer: "*" type_qualifier_list
#line 459 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("pointer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1612 "Parser.cpp"
    break;

  case 50: // pointer: "*" pointer
#line 464 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("pointer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1622 "Parser.cpp"
    break;

  case 51: // pointer: "*"
#line 469 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("pointer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
	}
#line 1631 "Parser.cpp"
    break;

  case 52: // direct_declarator: IDENTIFIER
#line 476 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 1640 "Parser.cpp"
    break;

  case 53: // direct_declarator: "(" declarator ")"
#line 480 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 1651 "Parser.cpp"
    break;

  case 54: // direct_declarator: direct_declarator "[" "]"
#line 486 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1662 "Parser.cpp"
    break;

  case 55: // direct_declarator: direct_declarator "[" "*" "]"
#line 492 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1674 "Parser.cpp"
    break;

  case 56: // direct_declarator: direct_declarator "[" "static" type_qualifier_list assignment_expression "]"
#line 499 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[5].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1688 "Parser.cpp"
    break;

  case 57: // direct_declarator: direct_declarator "[" "static" assignment_expression "]"
#line 508 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1701 "Parser.cpp"
    break;

  case 58: // direct_declarator: direct_declarator "[" type_qualifier_list "*" "]"
#line 516 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1714 "Parser.cpp"
    break;

  case 59: // direct_declarator: direct_declarator "[" type_qualifier_list "static" assignment_expression "]"
#line 524 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[5].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1728 "Parser.cpp"
    break;

  case 60: // direct_declarator: direct_declarator "[" type_qualifier_list assignment_expression "]"
#line 533 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1741 "Parser.cpp"
    break;

  case 61: // direct_declarator: direct_declarator "[" type_qualifier_list "]"
#line 541 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1753 "Parser.cpp"
    break;

  case 62: // direct_declarator: direct_declarator "[" assignment_expression "]"
#line 548 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 1765 "Parser.cpp"
    break;

  case 63: // direct_declarator: direct_declarator "(" parameter_type_list ")"
#line 555 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 1777 "Parser.cpp"
    break;

  case 64: // direct_declarator: direct_declarator "(" ")"
#line 562 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 1788 "Parser.cpp"
    break;

  case 65: // direct_declarator: direct_declarator "(" identifier_list ")"
#line 568 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 1800 "Parser.cpp"
    break;

  case 66: // block_item_list: block_item
#line 578 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("block_item_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1809 "Parser.cpp"
    break;

  case 67: // block_item_list: block_item_list block_item
#line 582 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("block_item_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1819 "Parser.cpp"
    break;

  case 68: // init_declarator: declarator "=" initializer
#line 590 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("init_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("="));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1830 "Parser.cpp"
    break;

  case 69: // init_declarator: declarator
#line 596 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("init_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1839 "Parser.cpp"
    break;

  case 70: // type_qualifier_list: type_qualifier
#line 603 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_qualifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1848 "Parser.cpp"
    break;

  case 71: // type_qualifier_list: type_qualifier_list type_qualifier
#line 607 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_qualifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1858 "Parser.cpp"
    break;

  case 72: // assignment_expression: conditional_expression
#line 615 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1867 "Parser.cpp"
    break;

  case 73: // assignment_expression: unary_expression assignment_operator assignment_expression
#line 619 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1878 "Parser.cpp"
    break;

  case 74: // parameter_type_list: parameter_list "," "..."
#line 628 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_type_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("..."));
	}
#line 1889 "Parser.cpp"
    break;

  case 75: // parameter_type_list: parameter_list
#line 634 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_type_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1898 "Parser.cpp"
    break;

  case 76: // identifier_list: IDENTIFIER
#line 641 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("identifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 1907 "Parser.cpp"
    break;

  case 77: // identifier_list: identifier_list "," IDENTIFIER
#line 645 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("identifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 1918 "Parser.cpp"
    break;

  case 78: // block_item: declaration
#line 654 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("block_item");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1927 "Parser.cpp"
    break;

  case 79: // block_item: statement
#line 658 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("block_item");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1936 "Parser.cpp"
    break;

  case 80: // initializer: "{" initializer_list "}"
#line 665 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 1947 "Parser.cpp"
    break;

  case 81: // initializer: "{" initializer_list "," "}"
#line 671 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 1959 "Parser.cpp"
    break;

  case 82: // initializer: assignment_expression
#line 678 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1968 "Parser.cpp"
    break;

  case 83: // conditional_expression: logical_or_expression
#line 685 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("conditional_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1977 "Parser.cpp"
    break;

  case 84: // conditional_expression: logical_or_expression "?" expression ":" conditional_expression
#line 689 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("conditional_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("?"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(":"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1990 "Parser.cpp"
    break;

  case 85: // unary_expression: postfix_expression
#line 700 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 1999 "Parser.cpp"
    break;

  case 86: // unary_expression: "++" unary_expression
#line 704 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("++"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2009 "Parser.cpp"
    break;

  case 87: // unary_expression: "--" unary_expression
#line 709 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("--"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2019 "Parser.cpp"
    break;

  case 88: // unary_expression: unary_operator cast_expression
#line 714 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2029 "Parser.cpp"
    break;

  case 89: // unary_expression: "sizeof" unary_expression
#line 719 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("sizeof"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2039 "Parser.cpp"
    break;

  case 90: // unary_expression: "sizeof" "(" type_name ")"
#line 724 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("sizeof"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 2051 "Parser.cpp"
    break;

  case 91: // assignment_operator: "="
#line 734 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("="));
	}
#line 2060 "Parser.cpp"
    break;

  case 92: // assignment_operator: "*="
#line 738 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*="));
	}
#line 2069 "Parser.cpp"
    break;

  case 93: // assignment_operator: "/="
#line 742 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("/="));
	}
#line 2078 "Parser.cpp"
    break;

  case 94: // assignment_operator: "%="
#line 746 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("%="));
	}
#line 2087 "Parser.cpp"
    break;

  case 95: // assignment_operator: "+="
#line 750 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("+="));
	}
#line 2096 "Parser.cpp"
    break;

  case 96: // assignment_operator: "-="
#line 754 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("-="));
	}
#line 2105 "Parser.cpp"
    break;

  case 97: // assignment_operator: "<<="
#line 758 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("<<="));
	}
#line 2114 "Parser.cpp"
    break;

  case 98: // assignment_operator: ">>="
#line 762 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(">>="));
	}
#line 2123 "Parser.cpp"
    break;

  case 99: // assignment_operator: "&="
#line 766 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("&="));
	}
#line 2132 "Parser.cpp"
    break;

  case 100: // assignment_operator: "|="
#line 770 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("|="));
	}
#line 2141 "Parser.cpp"
    break;

  case 101: // assignment_operator: "^="
#line 774 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("assignment_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("^="));
	}
#line 2150 "Parser.cpp"
    break;

  case 102: // parameter_list: parameter_declaration
#line 781 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2159 "Parser.cpp"
    break;

  case 103: // parameter_list: parameter_list "," parameter_declaration
#line 785 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2170 "Parser.cpp"
    break;

  case 104: // statement: labeled_statement
#line 794 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2179 "Parser.cpp"
    break;

  case 105: // statement: compound_statement
#line 798 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2188 "Parser.cpp"
    break;

  case 106: // statement: expression_statement
#line 802 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2197 "Parser.cpp"
    break;

  case 107: // statement: selection_statement
#line 806 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2206 "Parser.cpp"
    break;

  case 108: // statement: iteration_statement
#line 810 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2215 "Parser.cpp"
    break;

  case 109: // statement: jump_statement
#line 814 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2224 "Parser.cpp"
    break;

  case 110: // initializer_list: designation initializer
#line 821 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2234 "Parser.cpp"
    break;

  case 111: // initializer_list: initializer
#line 826 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2243 "Parser.cpp"
    break;

  case 112: // initializer_list: initializer_list "," designation initializer
#line 830 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2255 "Parser.cpp"
    break;

  case 113: // initializer_list: initializer_list "," initializer
#line 837 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("initializer_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2266 "Parser.cpp"
    break;

  case 114: // logical_or_expression: logical_and_expression
#line 846 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("logical_or_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2275 "Parser.cpp"
    break;

  case 115: // logical_or_expression: logical_or_expression "||" logical_and_expression
#line 850 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("logical_or_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("||"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2286 "Parser.cpp"
    break;

  case 116: // postfix_expression: primary_expression
#line 859 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2295 "Parser.cpp"
    break;

  case 117: // postfix_expression: postfix_expression "[" expression "]"
#line 863 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 2307 "Parser.cpp"
    break;

  case 118: // postfix_expression: postfix_expression "(" ")"
#line 870 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 2318 "Parser.cpp"
    break;

  case 119: // postfix_expression: postfix_expression "(" argument_expression_list ")"
#line 876 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 2330 "Parser.cpp"
    break;

  case 120: // postfix_expression: postfix_expression "." IDENTIFIER
#line 883 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("."));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 2341 "Parser.cpp"
    break;

  case 121: // postfix_expression: postfix_expression "->" IDENTIFIER
#line 889 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("->"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 2352 "Parser.cpp"
    break;

  case 122: // postfix_expression: postfix_expression "++"
#line 895 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("++"));
	}
#line 2362 "Parser.cpp"
    break;

  case 123: // postfix_expression: postfix_expression "--"
#line 900 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("--"));
	}
#line 2372 "Parser.cpp"
    break;

  case 124: // postfix_expression: "(" type_name ")" "}" initializer_list "}"
#line 905 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 2386 "Parser.cpp"
    break;

  case 125: // postfix_expression: "(" type_name ")" "}" initializer_list "," "}"
#line 914 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("postfix_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[5].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 2401 "Parser.cpp"
    break;

  case 126: // unary_operator: "&"
#line 927 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("&"));
	}
#line 2410 "Parser.cpp"
    break;

  case 127: // unary_operator: "*"
#line 931 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
	}
#line 2419 "Parser.cpp"
    break;

  case 128: // unary_operator: "+"
#line 935 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("+"));
	}
#line 2428 "Parser.cpp"
    break;

  case 129: // unary_operator: "-"
#line 939 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("-"));
	}
#line 2437 "Parser.cpp"
    break;

  case 130: // unary_operator: "~"
#line 943 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("~"));
	}
#line 2446 "Parser.cpp"
    break;

  case 131: // unary_operator: "!"
#line 947 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("unary_operator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("!"));
	}
#line 2455 "Parser.cpp"
    break;

  case 132: // cast_expression: unary_expression
#line 954 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("cast_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2464 "Parser.cpp"
    break;

  case 133: // cast_expression: "(" type_name ")" cast_expression
#line 958 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("cast_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2476 "Parser.cpp"
    break;

  case 134: // type_name: specifier_qualifier_list abstract_declarator
#line 968 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_name");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2486 "Parser.cpp"
    break;

  case 135: // type_name: specifier_qualifier_list
#line 973 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("type_name");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2495 "Parser.cpp"
    break;

  case 136: // parameter_declaration: declaration_specifiers declarator
#line 980 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_declaration");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2505 "Parser.cpp"
    break;

  case 137: // parameter_declaration: declaration_specifiers abstract_declarator
#line 985 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_declaration");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2515 "Parser.cpp"
    break;

  case 138: // parameter_declaration: declaration_specifiers
#line 990 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("parameter_declaration");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2524 "Parser.cpp"
    break;

  case 139: // labeled_statement: IDENTIFIER ":" statement
#line 997 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("labeled_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[2].value.as < std::string > ())));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(":"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2535 "Parser.cpp"
    break;

  case 140: // labeled_statement: "case" constant_expression ":" statement
#line 1003 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("labeled_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("case"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(":"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2547 "Parser.cpp"
    break;

  case 141: // labeled_statement: "default" ":" statement
#line 1010 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("labeled_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("default"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(":"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2558 "Parser.cpp"
    break;

  case 142: // expression_statement: ";"
#line 1019 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("expression_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2567 "Parser.cpp"
    break;

  case 143: // expression_statement: expression ";"
#line 1023 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("expression_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2577 "Parser.cpp"
    break;

  case 144: // selection_statement: "if" "(" expression ")" statement "else" statement
#line 1031 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("selection_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("if"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("else"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2592 "Parser.cpp"
    break;

  case 145: // selection_statement: "if" "(" expression ")" statement
#line 1041 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("selection_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("if"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2605 "Parser.cpp"
    break;

  case 146: // selection_statement: "switch" "(" expression ")" statement
#line 1049 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("selection_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("switch"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2618 "Parser.cpp"
    break;

  case 147: // iteration_statement: "while" "(" expression ")" statement
#line 1060 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("iteration_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("while"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2631 "Parser.cpp"
    break;

  case 148: // iteration_statement: "do" statement "while" "(" expression ")" ";"
#line 1068 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("iteration_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("do"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[5].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("while"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2646 "Parser.cpp"
    break;

  case 149: // iteration_statement: "for" "(" expression_statement expression_statement ")" statement
#line 1078 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("iteration_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("for"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2660 "Parser.cpp"
    break;

  case 150: // iteration_statement: "for" "(" expression_statement expression_statement expression ")" statement
#line 1087 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("iteration_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("for"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2675 "Parser.cpp"
    break;

  case 151: // iteration_statement: "for" "(" declaration expression_statement ")" statement
#line 1097 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("iteration_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("for"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2689 "Parser.cpp"
    break;

  case 152: // iteration_statement: "for" "(" declaration expression_statement expression ")" statement
#line 1106 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("iteration_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("for"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2704 "Parser.cpp"
    break;

  case 153: // jump_statement: "goto" IDENTIFIER ";"
#line 1119 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("jump_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("goto"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[1].value.as < std::string > ())));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2715 "Parser.cpp"
    break;

  case 154: // jump_statement: "continue" ";"
#line 1125 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("jump_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("continue"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2725 "Parser.cpp"
    break;

  case 155: // jump_statement: "break" ";"
#line 1130 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("jump_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("break"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2735 "Parser.cpp"
    break;

  case 156: // jump_statement: "return" ";"
#line 1135 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("jump_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("return"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2745 "Parser.cpp"
    break;

  case 157: // jump_statement: "return" expression ";"
#line 1140 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("jump_statement");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("continue"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 2756 "Parser.cpp"
    break;

  case 158: // designation: designator_list "="
#line 1149 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("designation");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("="));
	}
#line 2766 "Parser.cpp"
    break;

  case 159: // logical_and_expression: inclusive_or_expression
#line 1157 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("logical_and_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2775 "Parser.cpp"
    break;

  case 160: // logical_and_expression: logical_and_expression "&&" inclusive_or_expression
#line 1161 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("logical_and_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("&&"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2786 "Parser.cpp"
    break;

  case 161: // primary_expression: IDENTIFIER
#line 1170 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("primary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 2795 "Parser.cpp"
    break;

  case 162: // primary_expression: constant
#line 1174 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("primary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2804 "Parser.cpp"
    break;

  case 163: // primary_expression: STRING
#line 1178 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("primary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 2813 "Parser.cpp"
    break;

  case 164: // primary_expression: "(" expression ")"
#line 1182 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("primary_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 2824 "Parser.cpp"
    break;

  case 165: // expression: assignment_expression
#line 1191 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2833 "Parser.cpp"
    break;

  case 166: // expression: expression "," assignment_expression
#line 1195 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2844 "Parser.cpp"
    break;

  case 167: // argument_expression_list: assignment_expression
#line 1204 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("argument_expression_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2853 "Parser.cpp"
    break;

  case 168: // argument_expression_list: argument_expression_list "," assignment_expression
#line 1208 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("argument_expression_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2864 "Parser.cpp"
    break;

  case 169: // specifier_qualifier_list: type_specifier specifier_qualifier_list
#line 1217 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("specifier_qualifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2874 "Parser.cpp"
    break;

  case 170: // specifier_qualifier_list: type_specifier
#line 1222 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("specifier_qualifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2883 "Parser.cpp"
    break;

  case 171: // specifier_qualifier_list: type_qualifier specifier_qualifier_list
#line 1226 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("specifier_qualifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2893 "Parser.cpp"
    break;

  case 172: // specifier_qualifier_list: type_qualifier
#line 1231 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("specifier_qualifier_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2902 "Parser.cpp"
    break;

  case 173: // abstract_declarator: pointer direct_abstract_declarator
#line 1238 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2912 "Parser.cpp"
    break;

  case 174: // abstract_declarator: pointer
#line 1243 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2921 "Parser.cpp"
    break;

  case 175: // abstract_declarator: direct_abstract_declarator
#line 1247 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2930 "Parser.cpp"
    break;

  case 176: // constant_expression: conditional_expression
#line 1254 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("constant_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2939 "Parser.cpp"
    break;

  case 177: // designator_list: designator
#line 1261 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("designator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2948 "Parser.cpp"
    break;

  case 178: // designator_list: designator_list designator
#line 1265 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("designator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2958 "Parser.cpp"
    break;

  case 179: // inclusive_or_expression: exclusive_or_expression
#line 1273 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("inclusive_or_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2967 "Parser.cpp"
    break;

  case 180: // inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression
#line 1277 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("inclusive_or_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("|"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 2978 "Parser.cpp"
    break;

  case 181: // constant: INTEGER_CONSTANT
#line 1286 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {	/* includes character_constant */
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("constant");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
    }
#line 2987 "Parser.cpp"
    break;

  case 182: // constant: FLOATING_CONSTANT
#line 1290 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                            {
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("constant");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 2996 "Parser.cpp"
    break;

  case 183: // direct_abstract_declarator: "(" abstract_declarator ")"
#line 1298 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 3007 "Parser.cpp"
    break;

  case 184: // direct_abstract_declarator: "[" "]"
#line 1304 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3017 "Parser.cpp"
    break;

  case 185: // direct_abstract_declarator: "[" "*" "]"
#line 1309 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3028 "Parser.cpp"
    break;

  case 186: // direct_abstract_declarator: "[" "static" type_qualifier_list assignment_expression "]"
#line 1315 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3041 "Parser.cpp"
    break;

  case 187: // direct_abstract_declarator: "[" "static" assignment_expression "]"
#line 1323 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3053 "Parser.cpp"
    break;

  case 188: // direct_abstract_declarator: "[" type_qualifier_list "static" assignment_expression "]"
#line 1330 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3066 "Parser.cpp"
    break;

  case 189: // direct_abstract_declarator: "[" type_qualifier_list assignment_expression "]"
#line 1338 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3078 "Parser.cpp"
    break;

  case 190: // direct_abstract_declarator: "[" type_qualifier_list "]"
#line 1345 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3089 "Parser.cpp"
    break;

  case 191: // direct_abstract_declarator: "[" assignment_expression "]"
#line 1351 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3100 "Parser.cpp"
    break;

  case 192: // direct_abstract_declarator: direct_abstract_declarator "[" "]"
#line 1357 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3111 "Parser.cpp"
    break;

  case 193: // direct_abstract_declarator: direct_abstract_declarator "[" "*" "]"
#line 1363 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3123 "Parser.cpp"
    break;

  case 194: // direct_abstract_declarator: direct_abstract_declarator "[" "static" type_qualifier_list assignment_expression "]"
#line 1370 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[5].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3137 "Parser.cpp"
    break;

  case 195: // direct_abstract_declarator: direct_abstract_declarator "[" "static" assignment_expression "]"
#line 1379 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3150 "Parser.cpp"
    break;

  case 196: // direct_abstract_declarator: direct_abstract_declarator "[" type_qualifier_list assignment_expression "]"
#line 1387 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3163 "Parser.cpp"
    break;

  case 197: // direct_abstract_declarator: direct_abstract_declarator "[" type_qualifier_list "static" assignment_expression "]"
#line 1395 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[5].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("static"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3177 "Parser.cpp"
    break;

  case 198: // direct_abstract_declarator: direct_abstract_declarator "[" type_qualifier_list "]"
#line 1404 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3189 "Parser.cpp"
    break;

  case 199: // direct_abstract_declarator: direct_abstract_declarator "[" assignment_expression "]"
#line 1411 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3201 "Parser.cpp"
    break;

  case 200: // direct_abstract_declarator: "(" ")"
#line 1418 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 3211 "Parser.cpp"
    break;

  case 201: // direct_abstract_declarator: "(" parameter_type_list ")"
#line 1423 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 3222 "Parser.cpp"
    break;

  case 202: // direct_abstract_declarator: direct_abstract_declarator "(" ")"
#line 1429 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 3233 "Parser.cpp"
    break;

  case 203: // direct_abstract_declarator: direct_abstract_declarator "(" parameter_type_list ")"
#line 1435 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                       {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("direct_abstract_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("("));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(")"));
	}
#line 3245 "Parser.cpp"
    break;

  case 204: // designator: "[" constant_expression "]"
#line 1445 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("designator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3256 "Parser.cpp"
    break;

  case 205: // designator: "." IDENTIFIER
#line 1451 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("designator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("."));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 3266 "Parser.cpp"
    break;

  case 206: // exclusive_or_expression: and_expression
#line 1459 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("exclusive_or_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3275 "Parser.cpp"
    break;

  case 207: // exclusive_or_expression: exclusive_or_expression "^" and_expression
#line 1463 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("exclusive_or_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("^"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3286 "Parser.cpp"
    break;

  case 208: // and_expression: equality_expression
#line 1472 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("and_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3295 "Parser.cpp"
    break;

  case 209: // and_expression: and_expression "&" equality_expression
#line 1476 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                  {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("and_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("&"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3306 "Parser.cpp"
    break;

  case 210: // equality_expression: relational_expression
#line 1485 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("equality_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3315 "Parser.cpp"
    break;

  case 211: // equality_expression: equality_expression "==" relational_expression
#line 1489 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("equality_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("=="));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3326 "Parser.cpp"
    break;

  case 212: // equality_expression: equality_expression "!=" relational_expression
#line 1495 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("equality_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("!="));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3337 "Parser.cpp"
    break;

  case 213: // relational_expression: shift_expression
#line 1504 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("relational_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3346 "Parser.cpp"
    break;

  case 214: // relational_expression: relational_expression "<" shift_expression
#line 1508 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("relational_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("<"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3357 "Parser.cpp"
    break;

  case 215: // relational_expression: relational_expression ">" shift_expression
#line 1514 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("relational_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(">"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3368 "Parser.cpp"
    break;

  case 216: // relational_expression: relational_expression "<=" shift_expression
#line 1520 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("relational_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("<="));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3379 "Parser.cpp"
    break;

  case 217: // relational_expression: relational_expression ">=" shift_expression
#line 1526 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("relational_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(">="));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3390 "Parser.cpp"
    break;

  case 218: // shift_expression: additive_expression
#line 1535 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("shift_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3399 "Parser.cpp"
    break;

  case 219: // shift_expression: shift_expression "<<" additive_expression
#line 1539 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("shift_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("<<"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3410 "Parser.cpp"
    break;

  case 220: // shift_expression: shift_expression ">>" additive_expression
#line 1545 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                      {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("shift_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(">>"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3421 "Parser.cpp"
    break;

  case 221: // additive_expression: multiplicative_expression
#line 1554 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("additive_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3430 "Parser.cpp"
    break;

  case 222: // additive_expression: additive_expression "+" multiplicative_expression
#line 1558 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("additive_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("+"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3441 "Parser.cpp"
    break;

  case 223: // additive_expression: additive_expression "-" multiplicative_expression
#line 1564 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("additive_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("-"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3452 "Parser.cpp"
    break;

  case 224: // multiplicative_expression: cast_expression
#line 1573 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("multiplicative_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3461 "Parser.cpp"
    break;

  case 225: // multiplicative_expression: multiplicative_expression "*" cast_expression
#line 1577 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("multiplicative_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("*"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3472 "Parser.cpp"
    break;

  case 226: // multiplicative_expression: multiplicative_expression "/" cast_expression
#line 1583 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("multiplicative_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("/"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3483 "Parser.cpp"
    break;

  case 227: // multiplicative_expression: multiplicative_expression "%" cast_expression
#line 1589 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("multiplicative_expression");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("%"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3494 "Parser.cpp"
    break;

  case 228: // struct_or_union_specifier: struct_or_union "{" struct_declaration_list "}"
#line 1598 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_or_union_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[3].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 3506 "Parser.cpp"
    break;

  case 229: // struct_or_union_specifier: struct_or_union IDENTIFIER "{" struct_declaration_list "}"
#line 1605 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_or_union_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[4].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[3].value.as < std::string > ())));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("{"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("}"));
	}
#line 3519 "Parser.cpp"
    break;

  case 230: // struct_or_union_specifier: struct_or_union IDENTIFIER
#line 1613 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_or_union_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 3529 "Parser.cpp"
    break;

  case 231: // struct_or_union: "struct"
#line 1621 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                 {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_or_union");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("struct"));
	}
#line 3538 "Parser.cpp"
    break;

  case 232: // struct_or_union: "union"
#line 1625 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_or_union");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("union"));
	}
#line 3547 "Parser.cpp"
    break;

  case 233: // struct_declaration_list: struct_declaration
#line 1632 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declaration");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3556 "Parser.cpp"
    break;

  case 234: // struct_declaration_list: struct_declaration_list struct_declaration
#line 1636 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declaration");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3566 "Parser.cpp"
    break;

  case 235: // struct_declaration: specifier_qualifier_list ";"
#line 1644 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                             {      /* for anonymous struct/union */
	    yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declaration");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 3576 "Parser.cpp"
    break;

  case 236: // struct_declaration: specifier_qualifier_list struct_declarator_list ";"
#line 1649 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                                    {
	    yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declaration");
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
        yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(";"));
	}
#line 3587 "Parser.cpp"
    break;

  case 237: // struct_declarator_list: struct_declarator
#line 1658 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                            {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declarator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3596 "Parser.cpp"
    break;

  case 238: // struct_declarator_list: struct_declarator_list "," struct_declarator
#line 1662 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                         {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declarator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3607 "Parser.cpp"
    break;

  case 239: // struct_declarator: ":" constant_expression
#line 1671 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(":"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3617 "Parser.cpp"
    break;

  case 240: // struct_declarator: declarator ":" constant_expression
#line 1676 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                               {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(":"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3628 "Parser.cpp"
    break;

  case 241: // struct_declarator: declarator
#line 1682 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("struct_declarator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3637 "Parser.cpp"
    break;

  case 242: // enum_specifier: "enum" "{" enumerator_list "}"
#line 1689 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                             {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enum_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("enum"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3649 "Parser.cpp"
    break;

  case 243: // enum_specifier: "enum" "{" enumerator_list "," "}"
#line 1696 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                   {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enum_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("enum"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3662 "Parser.cpp"
    break;

  case 244: // enum_specifier: "enum" IDENTIFIER "{" enumerator_list "}"
#line 1704 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                        {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enum_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("enum"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[3].value.as < std::string > ())));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[1].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3675 "Parser.cpp"
    break;

  case 245: // enum_specifier: "enum" IDENTIFIER "{" enumerator_list "," "}"
#line 1712 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                              {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enum_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("enum"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[4].value.as < std::string > ())));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("["));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("]"));
	}
#line 3689 "Parser.cpp"
    break;

  case 246: // enum_specifier: "enum" IDENTIFIER
#line 1721 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                          {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enum_specifier");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("enum"));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 3699 "Parser.cpp"
    break;

  case 247: // enumerator_list: enumerator
#line 1729 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enumerator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3708 "Parser.cpp"
    break;

  case 248: // enumerator_list: enumerator_list "," enumerator
#line 1733 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                           {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enumerator_list");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[2].value.as < std::unique_ptr<ast::TreeNode> > ()));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(","));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3719 "Parser.cpp"
    break;

  case 249: // enumerator: IDENTIFIER "=" constant_expression
#line 1742 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                                                    {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enumerator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[2].value.as < std::string > ())));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node("="));
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(std::move(yystack_[0].value.as < std::unique_ptr<ast::TreeNode> > ()));
	}
#line 3730 "Parser.cpp"
    break;

  case 250: // enumerator: IDENTIFIER
#line 1748 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
                     {
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > () = ast::make_node("enumerator");
		yylhs.value.as < std::unique_ptr<ast::TreeNode> > ()->append_child(ast::make_node(std::move(yystack_[0].value.as < std::string > ())));
	}
#line 3739 "Parser.cpp"
    break;


#line 3743 "Parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  const char *
  Parser::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", ",", ":", ";", "{", "}", "(",
  ")", "[", "]", "?", ".", "->", "...", "+", "-", "*", "/", "%", "++",
  "--", "!", "||", "&&", "==", "!=", "<", ">", "<=", ">=", "|", "&", "^",
  "~", "<<", ">>", "=", "*=", "/=", "%=", "+=", "-=", "<<=", ">>=", "&=",
  "|=", "^=", "IDENTIFIER", "STRING", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "auto", "register", "static", "extern", "typedef",
  "struct", "union", "enum", "case", "default", "if", "else", "switch",
  "while", "do", "for", "goto", "continue", "break", "return", "const",
  "volatile", "restrict", "inline", "void", "char", "short", "int", "long",
  "float", "double", "signed", "unsigned", "bool", "sizeof", "$accept",
  "translation_unit", "external_declaration_list", "external_declaration",
  "function_definition", "declaration", "declaration_specifiers",
  "declarator", "declaration_list", "compound_statement",
  "init_declarator_list", "storage_class_specifier", "type_specifier",
  "type_qualifier", "function_specifier", "pointer", "direct_declarator",
  "block_item_list", "init_declarator", "type_qualifier_list",
  "assignment_expression", "parameter_type_list", "identifier_list",
  "block_item", "initializer", "conditional_expression",
  "unary_expression", "assignment_operator", "parameter_list", "statement",
  "initializer_list", "logical_or_expression", "postfix_expression",
  "unary_operator", "cast_expression", "type_name",
  "parameter_declaration", "labeled_statement", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "designation", "logical_and_expression", "primary_expression",
  "expression", "argument_expression_list", "specifier_qualifier_list",
  "abstract_declarator", "constant_expression", "designator_list",
  "inclusive_or_expression", "constant", "direct_abstract_declarator",
  "designator", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  // Parser::context.
  Parser::context::context (const Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short Parser::yypact_ninf_ = -304;

  const signed char Parser::yytable_ninf_ = -1;

  const short
  Parser::yypact_[] =
  {
    -304,    21,  1705,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,    16,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,    51,
    1705,  1705,  1705,  1705,  -304,    44,  -304,   -19,    34,  -304,
      71,     8,  -304,   837,   135,    46,   159,  -304,  -304,  -304,
    -304,  -304,  1466,    86,    24,    84,  -304,   -19,    97,  -304,
    -304,     8,   401,   819,  -304,    51,   871,  -304,    71,  -304,
     159,  1596,  1051,  1466,  1466,    59,   148,  -304,  1466,  1424,
      11,  -304,    98,  -304,  -304,  -304,  -304,  -304,   971,  -304,
    -304,  -304,  1448,  1448,  -304,  -304,  -304,   149,  -304,  -304,
    -304,  1424,   156,   120,   170,   216,   651,   227,   142,   239,
     248,   675,  1470,  -304,  -304,   485,  -304,  -304,  -304,   399,
    -304,    15,   229,  1424,  -304,  -304,  -304,  -304,  -304,  -304,
     241,  -304,   191,   250,  -304,   249,   260,    76,   186,   220,
     244,   192,   795,  -304,  -304,  -304,   257,  -304,  -304,  -304,
    -304,  -304,   126,   288,   113,   295,  -304,  -304,   289,   991,
    1096,   290,  -304,  -304,  1424,  -304,   300,   196,  -304,  -304,
    -304,  1261,  -304,  -304,  -304,  -304,  -304,    45,  -304,   296,
     124,   155,   971,  -304,  -304,   651,   303,   651,  1424,  1424,
    1424,   233,   568,   308,  -304,  -304,  -304,   200,   971,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  1424,  1424,  1424,  1344,  1424,   259,   265,
    -304,  -304,  -304,  1424,  1424,  -304,  1424,  1424,  1424,  1424,
    1424,  1424,  1424,  1424,  1424,  1424,  1424,  1424,  1424,  1424,
    1424,  1424,  1424,   269,  -304,   183,   819,    99,  -304,  1505,
    1141,  -304,   151,  -304,   210,  -304,   270,  -304,  1671,  -304,
     991,   309,  -304,   310,  1424,   311,  -304,  -304,  1424,    68,
    -304,  -304,  -304,   951,  -304,  1558,   228,  -304,   314,  -304,
     651,  -304,   140,   147,   161,   316,   723,   723,  -304,  -304,
     319,  -304,   261,   241,  -304,  -304,   168,   118,  -304,  -304,
     250,  -304,   249,   260,    76,   186,   186,   220,   220,   220,
     220,   244,   244,   192,   192,  -304,  -304,  -304,   318,  -304,
     747,  -304,  -304,  -304,  -304,  -304,   321,   322,  -304,   323,
     991,  1186,   324,   210,  1637,  1231,  -304,  -304,  -304,   325,
    -304,  -304,   329,  -304,  -304,  -304,   795,  -304,   326,  -304,
     651,   651,   651,  1424,  1364,  1403,   326,  1424,  1424,  -304,
    -304,  -304,  -304,  -304,   819,  -304,  -304,  -304,   991,   330,
    -304,  1424,   332,  -304,  -304,   335,  -304,   338,   991,  1276,
     340,  -304,  -304,   190,   268,  -304,  -304,   171,   651,   173,
     651,   180,  -304,  -304,  -304,   341,  -304,   342,  -304,  -304,
    -304,   991,   343,  -304,  1424,   344,  -304,   771,  -304,   651,
     320,  -304,   651,  -304,   651,  -304,  -304,   345,  -304,   346,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304
  };

  const unsigned char
  Parser::yydefact_[] =
  {
       3,     0,     2,     1,    30,    31,    29,    28,    27,   231,
     232,     0,    44,    46,    45,    47,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     4,     5,     6,     0,
      12,    14,    16,    18,    42,     0,    43,     0,   246,     9,
       0,    51,    52,    69,     0,     0,    20,    25,    11,    13,
      15,    17,     0,   230,   250,     0,   247,     0,     0,    70,
      50,    49,     0,     0,    21,     0,     0,     8,     0,    10,
      19,     0,     0,   170,   172,     0,     0,   233,     0,     0,
       0,   242,     0,    53,    71,    48,   142,    23,     0,   128,
     129,   127,     0,     0,   131,   126,   130,   161,   163,   181,
     182,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,   105,     0,   165,    66,    72,   132,
      79,    83,    85,     0,   224,   104,   106,   107,   108,   109,
     114,   116,     0,   159,   162,   179,   206,   208,   210,   213,
     218,   221,     0,   161,    82,    68,    69,    22,     7,    26,
      64,    76,   138,     0,     0,    75,   102,    54,   127,     0,
       0,     0,   169,   171,     0,   235,   241,     0,   237,   228,
     234,     0,   176,   132,   249,   243,   248,     0,   244,     0,
       0,   135,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   156,     0,     0,    89,
      24,    67,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,     0,
     122,   123,    88,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   177,     0,
       0,   136,   174,   137,   175,    63,     0,    65,     0,    55,
       0,     0,    61,   127,     0,     0,    62,   239,     0,     0,
     236,   229,   245,     0,   164,     0,   174,   134,     0,   139,
       0,   141,     0,     0,     0,     0,     0,     0,   153,   157,
       0,    73,     0,   115,   118,   167,     0,     0,   120,   121,
     160,   166,   180,   207,   209,   211,   212,   214,   215,   216,
     217,   219,   220,   222,   223,   225,   226,   227,     0,   205,
       0,    80,   110,   158,   178,   200,     0,     0,   184,   127,
       0,     0,     0,   173,     0,     0,    77,    74,   103,     0,
      57,    58,     0,    60,   240,   238,     0,   133,     0,   140,
       0,     0,     0,     0,     0,     0,    90,     0,     0,   119,
     117,   204,    81,   113,     0,   201,   183,   185,     0,     0,
     190,     0,     0,   191,   202,     0,   192,   127,     0,     0,
       0,    56,    59,     0,   145,   146,   147,     0,     0,     0,
       0,     0,    84,   168,   112,     0,   187,     0,   189,   203,
     193,     0,     0,   198,     0,     0,   199,     0,   124,     0,
       0,   151,     0,   149,     0,   186,   188,     0,   195,     0,
     196,   125,   144,   148,   152,   150,   194,   197
  };

  const short
  Parser::yypgoto_[] =
  {
    -304,  -304,  -304,  -304,  -304,    12,    13,   -17,  -304,   -24,
    -304,  -304,    -3,   -41,  -304,     0,   -39,  -304,   291,   -63,
     -62,   -64,  -304,   243,   -61,   -76,   162,  -304,  -304,   -40,
      17,  -304,  -304,  -304,  -115,  -108,   103,  -304,  -176,  -304,
    -304,  -304,  -303,   150,  -304,   -75,  -304,   -50,  -124,   -96,
    -304,   139,  -304,  -223,   117,   141,   143,   138,    47,    14,
      56,    49,  -304,  -304,   293,   -72,  -304,   104,  -304,   327,
     -46
  };

  const short
  Parser::yydefgoto_[] =
  {
       0,     1,     2,    26,    27,   113,    65,    58,    66,   114,
      44,    30,    31,    32,    33,    45,    46,   115,    47,    61,
     116,   326,   154,   117,   244,   118,   119,   213,   155,   120,
     245,   121,   122,   123,   124,   179,   156,   125,   126,   127,
     128,   129,   246,   130,   131,   132,   296,    75,   327,   174,
     247,   133,   134,   254,   248,   135,   136,   137,   138,   139,
     140,   141,    34,    35,    76,    77,   167,   168,    36,    55,
      56
  };

  const short
  Parser::yytable_[] =
  {
      59,   144,   145,   172,   170,   186,    70,   153,   222,   160,
     161,    74,    43,   180,    28,    29,   287,   364,   175,    67,
      84,     3,    37,   162,   163,   172,    41,   214,   253,   333,
      54,    59,    74,    74,   176,    74,   197,    74,   181,   215,
      57,    60,   148,    48,    49,    50,    51,    74,   146,    73,
      52,   146,   272,   333,    40,    64,    39,   277,   166,    40,
      54,    85,    79,   164,   165,    38,   191,    40,   267,    41,
      73,    73,   164,    73,   278,    73,    40,    41,   147,    40,
     144,    12,    13,    14,   152,    73,    41,    80,   172,    41,
     290,    81,    78,    53,    54,    42,   260,   261,   265,   170,
      42,   177,   229,   230,   364,   178,    83,   180,    42,   242,
     354,   355,   243,   282,   283,   284,   256,    42,    59,    84,
      42,   224,   257,   180,   315,   316,   317,   224,   188,   360,
      74,   176,   181,   274,   249,   251,   250,   323,    68,   292,
      69,    74,   297,   224,    41,   279,   318,   281,   181,   350,
     224,   291,   252,   185,   295,   169,   351,    74,   347,   249,
     187,   250,   301,   275,   224,   250,   172,    71,    73,    72,
     352,   358,   344,    41,   224,    42,   224,   359,   189,    73,
     410,   276,   412,   224,   144,   322,   320,   331,   332,   414,
     321,   193,   172,   407,   224,    73,   225,   408,   339,   269,
      42,   270,   342,   224,   286,   289,     9,    10,    11,    59,
     239,   240,   241,    70,   231,   232,   233,   234,   334,    84,
     335,    12,    13,    14,   190,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   192,   275,   216,   250,   217,
     349,   173,   218,   219,   194,   307,   308,   309,   310,   252,
     220,   221,   166,   195,   183,   184,   235,   236,   144,   363,
     237,   238,   152,   173,   224,   357,   223,   368,   369,   372,
     375,   152,   379,   380,   199,   276,   305,   306,   387,   389,
     391,   392,   226,   227,   144,   173,   313,   314,   152,    59,
      84,   311,   312,   228,    59,    63,   393,   255,   258,   285,
     259,   266,   144,   394,   268,   273,   395,   280,   298,   397,
     384,   385,   386,   288,   299,   401,   402,   405,   319,   336,
     340,   341,   343,   348,   353,   423,   173,    84,   356,   361,
     365,   366,   409,   346,   367,   373,   381,    59,    84,   417,
     382,   396,   419,   398,   399,   144,   363,   152,   411,   400,
     413,   406,   415,   416,   418,   420,   426,   427,   201,   149,
      84,   338,   300,   383,   324,   293,   304,   302,     0,   422,
     303,   171,   424,   345,   425,     0,     0,   173,     0,     0,
       0,     0,     0,     0,    82,   173,     0,     0,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,     0,    86,    62,    87,    88,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,     0,    92,    93,    94,     0,     0,     0,     0,     0,
     173,     0,     0,     0,    95,   173,    96,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,     0,     0,
      97,    98,    99,   100,     4,     5,     6,     7,     8,     9,
      10,    11,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   112,     0,
      86,    62,   200,    88,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,     0,     0,    92,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,   173,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,    99,   100,     4,     5,
       6,     7,     8,     9,    10,    11,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   112,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,     0,     0,    92,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,    98,    99,
     100,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   112,    86,    62,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,     0,    92,    93,    94,     0,     0,     0,     0,     0,
     196,     0,     0,    88,    95,     0,    96,     0,     0,     0,
       0,    89,    90,    91,     0,     0,    92,    93,    94,     0,
      97,    98,    99,   100,     0,     0,     0,     0,    95,     0,
      96,     0,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   143,    98,    99,   100,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,   112,    89,
      90,    91,     0,     0,    92,    93,    94,     0,     0,     0,
       0,     0,     0,   142,   362,    88,    95,   242,    96,     0,
     243,     0,   112,    89,    90,    91,     0,     0,    92,    93,
      94,     0,   143,    98,    99,   100,     0,   142,   421,    88,
      95,   242,    96,     0,   243,     0,     0,    89,    90,    91,
       0,     0,    92,    93,    94,     0,   143,    98,    99,   100,
       0,   142,     0,    88,    95,   242,    96,     0,   243,     0,
     112,    89,    90,    91,     0,     0,    92,    93,    94,     0,
     143,    98,    99,   100,     0,   142,     0,    88,    95,     0,
      96,     0,     0,     0,   112,    89,    90,    91,     0,     0,
      92,    93,    94,    62,   143,    98,    99,   100,     0,     0,
       0,     0,    95,     0,    96,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,    98,
      99,   100,     0,     0,     0,    63,     0,    62,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   346,    88,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,     0,    92,    93,    94,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    95,     0,    96,    89,    90,    91,
       0,     0,    92,    93,    94,     0,     0,     0,     0,    88,
     143,    98,    99,   100,    95,     0,    96,    89,    90,    91,
       0,     0,    92,    93,    94,     0,     0,     0,     0,     0,
     143,    98,    99,   100,    95,     0,    96,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,   112,     0,
     143,    98,    99,   100,    12,    13,    14,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   112,    88,
       0,     0,   157,     0,    12,    13,    14,    89,    90,   158,
       0,     0,    92,    93,    94,     0,     0,     0,   112,     0,
       0,     0,     0,     0,    95,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,    98,    99,   100,    88,     0,   159,   262,     0,     0,
       0,     0,    89,    90,   263,     0,     0,    92,    93,    94,
       0,     0,     0,     0,    12,    13,    14,     0,     0,    95,
       0,    96,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,   143,    98,    99,   100,    88,
       0,   264,   328,     0,     0,     0,     0,    89,    90,   329,
       0,     0,    92,    93,    94,     0,     0,     0,     0,    12,
      13,    14,     0,     0,    95,     0,    96,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
     143,    98,    99,   100,    88,     0,   330,   370,     0,     0,
       0,     0,    89,    90,    91,     0,     0,    92,    93,    94,
       0,     0,     0,     0,    12,    13,    14,     0,     0,    95,
       0,    96,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,   143,    98,    99,   100,    88,
       0,   371,   376,     0,     0,     0,     0,    89,    90,   377,
       0,     0,    92,    93,    94,     0,     0,     0,     0,    12,
      13,    14,     0,     0,    95,     0,    96,     0,   271,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
     143,    98,    99,   100,    88,     0,   378,   403,     0,     0,
       0,     0,    89,    90,    91,     0,     0,    92,    93,    94,
       0,     0,     0,     0,    12,    13,    14,     0,     0,    95,
       0,    96,     0,     0,     0,     0,     0,     0,   112,     9,
      10,    11,     0,     0,     0,   143,    98,    99,   100,     0,
       0,   404,     0,     0,    12,    13,    14,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    12,
      13,    14,    88,   294,     0,     0,     0,     0,     0,     0,
      89,    90,    91,   112,     0,    92,    93,    94,     0,     0,
       0,     0,    88,   388,     0,     0,     0,    95,     0,    96,
      89,    90,    91,     0,     0,    92,    93,    94,     0,     0,
       0,     0,     0,   143,    98,    99,   100,    95,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,   390,   143,    98,    99,   100,     0,     0,    89,
      90,    91,     0,     0,    92,    93,    94,     0,     0,     0,
       0,   112,    88,     0,     0,     0,    95,     0,    96,     0,
      89,    90,    91,     0,     0,    92,    93,    94,     0,     0,
       0,   112,   143,    98,    99,   100,   182,    95,     0,    96,
       0,     0,     0,     0,    89,    90,    91,     0,     0,    92,
      93,    94,     0,   143,    98,    99,   100,     0,   198,     0,
       0,    95,     0,    96,     0,     0,    89,    90,    91,     0,
     112,    92,    93,    94,     0,     0,     0,   143,    98,    99,
     100,     0,     0,    95,     0,    96,     0,     0,     0,     0,
       0,   112,     0,   249,   325,   250,     0,     0,     0,   143,
      98,    99,   100,    41,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,    12,
      13,    14,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    42,     0,     0,   112,     4,     5,
       6,     7,     8,     9,    10,    11,   275,   325,   250,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   151,   374,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,   337,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     4,     5,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25
  };

  const short
  Parser::yycheck_[] =
  {
      41,    63,    63,    79,    76,   101,    45,    71,   123,    72,
      72,    52,    29,    88,     2,     2,   192,   320,     7,    43,
      61,     0,     6,    73,    74,   101,    18,    12,   152,   252,
      49,    72,    73,    74,    80,    76,   111,    78,    88,    24,
       6,    41,    66,    30,    31,    32,    33,    88,    65,    52,
       6,    68,     7,   276,     8,    43,     5,   181,    75,     8,
      49,    61,    38,     4,     5,    49,   106,     8,   164,    18,
      73,    74,     4,    76,   182,    78,     8,    18,    66,     8,
     142,    73,    74,    75,    71,    88,    18,     3,   164,    18,
     198,     7,     6,    49,    49,    49,   159,   159,   160,   171,
      49,     3,    26,    27,   407,     7,     9,   182,    49,    10,
     286,   287,    13,   188,   189,   190,     3,    49,   159,   160,
      49,     3,     9,   198,   239,   240,   241,     3,     8,    11,
     171,   177,   182,     9,     8,   152,    10,    38,     3,   214,
       5,   182,   217,     3,    18,   185,   242,   187,   198,     9,
       3,   213,   152,     4,   216,     7,     9,   198,   273,     8,
       4,    10,   224,     8,     3,    10,   242,     8,   171,    10,
       9,     3,   268,    18,     3,    49,     3,     9,     8,   182,
       9,   181,     9,     3,   246,   246,     3,   250,   250,     9,
       7,    49,   268,     3,     3,   198,     5,     7,   260,     3,
      49,     5,   264,     3,   192,     5,    58,    59,    60,   250,
      18,    19,    20,   252,    28,    29,    30,    31,     8,   260,
      10,    73,    74,    75,     8,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,     8,     8,     8,    10,    10,
     280,    79,    13,    14,     5,   231,   232,   233,   234,   249,
      21,    22,   269,     5,    92,    93,    36,    37,   320,   320,
      16,    17,   249,   101,     3,     4,    25,   330,   330,   331,
     334,   258,   335,   335,   112,   275,   229,   230,   353,   354,
     355,   357,    32,    34,   346,   123,   237,   238,   275,   330,
     331,   235,   236,    33,   335,    38,   358,     9,     3,    66,
      11,    11,   364,   364,     4,     9,   368,     4,    49,   371,
     350,   351,   352,     5,    49,   378,   378,   379,    49,    49,
      11,    11,    11,     9,     8,     5,   164,   368,     9,    11,
       9,     9,    64,     7,    11,    11,    11,   378,   379,   401,
      11,    11,   404,    11,     9,   407,   407,   334,   388,    11,
     390,    11,    11,    11,    11,    11,    11,    11,   115,    68,
     401,   258,   223,   346,   247,   215,   228,   226,    -1,   409,
     227,    78,   412,   269,   414,    -1,    -1,   215,    -1,    -1,
      -1,    -1,    -1,    -1,    57,   223,    -1,    -1,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
     268,    -1,    -1,    -1,    33,   273,    35,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,   357,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     5,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     5,     6,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
       5,    -1,    -1,     8,    33,    -1,    35,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    49,    50,    51,    52,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    87,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,    33,    10,    35,    -1,
      13,    -1,    87,    16,    17,    18,    -1,    -1,    21,    22,
      23,    -1,    49,    50,    51,    52,    -1,     6,     7,     8,
      33,    10,    35,    -1,    13,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    49,    50,    51,    52,
      -1,     6,    -1,     8,    33,    10,    35,    -1,    13,    -1,
      87,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      49,    50,    51,    52,    -1,     6,    -1,     8,    33,    -1,
      35,    -1,    -1,    -1,    87,    16,    17,    18,    -1,    -1,
      21,    22,    23,     6,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    38,    -1,     6,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    33,    -1,    35,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,     8,
      49,    50,    51,    52,    33,    -1,    35,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    33,    -1,    35,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      49,    50,    51,    52,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     8,
      -1,    -1,    11,    -1,    73,    74,    75,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,     8,    -1,    55,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,     8,
      -1,    55,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,     8,    -1,    55,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,     8,
      -1,    55,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    33,    -1,    35,    -1,     7,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,     8,    -1,    55,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    87,    58,
      59,    60,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    -1,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    73,
      74,    75,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    87,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    33,    -1,    35,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    49,    50,    51,    52,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    87,     8,    -1,    -1,    -1,    33,    -1,    35,    -1,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    87,    49,    50,    51,    52,     8,    33,    -1,    35,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    49,    50,    51,    52,    -1,     8,    -1,
      -1,    33,    -1,    35,    -1,    -1,    16,    17,    18,    -1,
      87,    21,    22,    23,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    87,    -1,     8,     9,    10,    -1,    -1,    -1,    49,
      50,    51,    52,    18,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    49,    -1,    -1,    87,    53,    54,
      55,    56,    57,    58,    59,    60,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    49,     9,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
  };

  const unsigned char
  Parser::yystos_[] =
  {
       0,    89,    90,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    91,    92,    93,    94,
      99,   100,   101,   102,   150,   151,   156,     6,    49,     5,
       8,    18,    49,    95,    98,   103,   104,   106,    94,    94,
      94,    94,     6,    49,    49,   157,   158,     6,    95,   101,
     103,   107,     6,    38,    93,    94,    96,    97,     3,     5,
     104,     8,    10,   100,   101,   135,   152,   153,     6,    38,
       3,     7,   157,     9,   101,   103,     5,     7,     8,    16,
      17,    18,    21,    22,    23,    33,    35,    49,    50,    51,
      52,    61,    62,    63,    65,    66,    67,    68,    69,    70,
      71,    72,    87,    93,    97,   105,   108,   111,   113,   114,
     117,   119,   120,   121,   122,   125,   126,   127,   128,   129,
     131,   132,   133,   139,   140,   143,   144,   145,   146,   147,
     148,   149,     6,    49,   108,   112,    95,    93,    97,   106,
       9,    49,    94,   109,   110,   116,   124,    11,    18,    55,
     107,   108,   135,   135,     4,     5,    95,   154,   155,     7,
     153,   152,   113,   114,   137,     7,   158,     3,     7,   123,
     133,   135,     8,   114,   114,     4,   137,     4,     8,     8,
       8,   117,     8,    49,     5,     5,     5,   133,     8,   114,
       7,   111,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,   115,    12,    24,     8,    10,    13,    14,
      21,    22,   122,    25,     3,     5,    32,    34,    33,    26,
      27,    28,    29,    30,    31,    36,    37,    16,    17,    18,
      19,    20,    10,    13,   112,   118,   130,   138,   142,     8,
      10,    95,   103,   136,   141,     9,     3,     9,     3,    11,
     107,   108,    11,    18,    55,   108,    11,   137,     4,     3,
       5,     7,     7,     9,     9,     8,   103,   136,   123,   117,
       4,   117,   133,   133,   133,    66,    93,   126,     5,     5,
     123,   108,   133,   131,     9,   108,   134,   133,    49,    49,
     139,   108,   143,   144,   145,   146,   146,   147,   147,   147,
     147,   148,   148,   149,   149,   122,   122,   122,   137,    49,
       3,     7,   112,    38,   142,     9,   109,   136,    11,    18,
      55,   107,   108,   141,     8,    10,    49,    15,   124,   108,
      11,    11,   108,    11,   137,   155,     7,   122,     9,   117,
       9,     9,     9,     8,   126,   126,     9,     4,     3,     9,
      11,    11,     7,   112,   130,     9,     9,    11,   107,   108,
      11,    55,   108,    11,     9,   109,    11,    18,    55,   107,
     108,    11,    11,   118,   117,   117,   117,   133,     9,   133,
       9,   133,   113,   108,   112,   108,    11,   108,    11,     9,
      11,   107,   108,    11,    55,   108,    11,     3,     7,    64,
       9,   117,     9,   117,     9,    11,    11,   108,    11,   108,
      11,     7,   117,     5,   117,   117,    11,    11
  };

  const unsigned char
  Parser::yyr1_[] =
  {
       0,    88,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   102,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   112,   113,   113,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   117,   117,   117,   117,
     118,   118,   118,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   121,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   125,
     125,   125,   126,   126,   127,   127,   127,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   130,   131,
     131,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135,   136,   136,   136,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   145,   146,   146,   146,   146,   146,   147,   147,
     147,   148,   148,   148,   149,   149,   149,   149,   150,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   155,   156,   156,   156,   156,   156,   157,   157,   158,
     158
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     1,     1,     4,     3,     2,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     2,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     1,     1,     3,     3,     4,     6,     5,     5,     6,
       5,     4,     4,     4,     3,     4,     1,     2,     3,     1,
       1,     2,     1,     3,     3,     1,     1,     3,     1,     1,
       3,     4,     1,     1,     5,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     4,     3,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     1,     2,     2,     1,     3,
       4,     3,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     2,     1,
       3,     1,     1,     1,     3,     1,     3,     1,     3,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       3,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     2,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     4,     5,
       2,     1,     1,     1,     2,     2,     3,     1,     3,     2,
       3,     1,     4,     5,     5,     6,     2,     1,     3,     3,
       1
  };




#if YYDEBUG
  const short
  Parser::yyrline_[] =
  {
       0,   208,   208,   214,   217,   225,   229,   236,   243,   252,
     257,   266,   271,   275,   280,   284,   289,   293,   298,   305,
     310,   317,   321,   329,   334,   343,   347,   356,   360,   364,
     368,   372,   379,   383,   387,   391,   395,   399,   403,   407,
     411,   415,   419,   423,   431,   435,   439,   446,   453,   459,
     464,   469,   476,   480,   486,   492,   499,   508,   516,   524,
     533,   541,   548,   555,   562,   568,   578,   582,   590,   596,
     603,   607,   615,   619,   628,   634,   641,   645,   654,   658,
     665,   671,   678,   685,   689,   700,   704,   709,   714,   719,
     724,   734,   738,   742,   746,   750,   754,   758,   762,   766,
     770,   774,   781,   785,   794,   798,   802,   806,   810,   814,
     821,   826,   830,   837,   846,   850,   859,   863,   870,   876,
     883,   889,   895,   900,   905,   914,   927,   931,   935,   939,
     943,   947,   954,   958,   968,   973,   980,   985,   990,   997,
    1003,  1010,  1019,  1023,  1031,  1041,  1049,  1060,  1068,  1078,
    1087,  1097,  1106,  1119,  1125,  1130,  1135,  1140,  1149,  1157,
    1161,  1170,  1174,  1178,  1182,  1191,  1195,  1204,  1208,  1217,
    1222,  1226,  1231,  1238,  1243,  1247,  1254,  1261,  1265,  1273,
    1277,  1286,  1290,  1298,  1304,  1309,  1315,  1323,  1330,  1338,
    1345,  1351,  1357,  1363,  1370,  1379,  1387,  1395,  1404,  1411,
    1418,  1423,  1429,  1435,  1445,  1451,  1459,  1463,  1472,  1476,
    1485,  1489,  1495,  1504,  1508,  1514,  1520,  1526,  1535,  1539,
    1545,  1554,  1558,  1564,  1573,  1577,  1583,  1589,  1598,  1605,
    1613,  1621,  1625,  1632,  1636,  1644,  1649,  1658,  1662,  1671,
    1676,  1682,  1689,  1696,  1704,  1712,  1721,  1729,  1733,  1742,
    1748
  };

  void
  Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  Parser::symbol_kind_type
  Parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
    };
    // Last valid token kind.
    const int code_max = 342;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

#line 16 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"
} // parsing
#line 4814 "Parser.cpp"

#line 1754 "/home/yegor/lab5/SysProg_Lab5/src/parser.y"


void parsing::Parser::error(const std::string& msg) {
    std::cerr << "Line " << scanner->lineno() << ": " << msg << '\n';
}
