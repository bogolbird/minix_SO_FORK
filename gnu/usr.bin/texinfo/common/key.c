/* key.c -- Generated array containing function names.

   This file was automatically made from various source files with the
   command "/usr/src/minix_SO_FORK/gnu/usr.bin/texinfo/makedoc/makedoc".  DO NOT EDIT THIS FILE, only "/usr/src/minix_SO_FORK/gnu/usr.bin/texinfo/makedoc/makedoc.c".

   Source files groveled to make this file include:

	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/session.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/echo-area.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/infodoc.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/m-x.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/indices.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/nodemenu.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/footnotes.c
	/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/variables.c

   An entry in the array FUNCTION_KEY_ARRAY is made for each command
   found in the above files; each entry consists of
   a string which is the user-visible name of the function.  */

#include "key.h"
#include "funs.h"

FUNCTION_KEY function_key_array[] = {

/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/session.c". */
   { "next-line", A_info_next_line },
   { "prev-line", A_info_prev_line },
   { "end-of-line", A_info_end_of_line },
   { "beginning-of-line", A_info_beginning_of_line },
   { "forward-char", A_info_forward_char },
   { "backward-char", A_info_backward_char },
   { "forward-word", A_info_forward_word },
   { "backward-word", A_info_backward_word },
   { "global-next-node", A_info_global_next_node },
   { "global-prev-node", A_info_global_prev_node },
   { "scroll-forward", A_info_scroll_forward },
   { "scroll-forward-set-window", A_info_scroll_forward_set_window },
   { "scroll-forward-page-only", A_info_scroll_forward_page_only },
   { "scroll-forward-page-only-set-window", A_info_scroll_forward_page_only_set_window },
   { "scroll-backward", A_info_scroll_backward },
   { "scroll-backward-set-window", A_info_scroll_backward_set_window },
   { "scroll-backward-page-only", A_info_scroll_backward_page_only },
   { "scroll-backward-page-only-set-window", A_info_scroll_backward_page_only_set_window },
   { "beginning-of-node", A_info_beginning_of_node },
   { "end-of-node", A_info_end_of_node },
   { "down-line", A_info_down_line },
   { "up-line", A_info_up_line },
   { "scroll-half-screen-down", A_info_scroll_half_screen_down },
   { "scroll-half-screen-up", A_info_scroll_half_screen_up },
   { "next-window", A_info_next_window },
   { "prev-window", A_info_prev_window },
   { "split-window", A_info_split_window },
   { "delete-window", A_info_delete_window },
   { "keep-one-window", A_info_keep_one_window },
   { "scroll-other-window", A_info_scroll_other_window },
   { "scroll-other-window-backward", A_info_scroll_other_window_backward },
   { "grow-window", A_info_grow_window },
   { "tile-windows", A_info_tile_windows },
   { "toggle-wrap", A_info_toggle_wrap },
   { "next-node", A_info_next_node },
   { "prev-node", A_info_prev_node },
   { "up-node", A_info_up_node },
   { "last-node", A_info_last_node },
   { "first-node", A_info_first_node },
   { "last-menu-item", A_info_last_menu_item },
   { "menu-digit", A_info_menu_digit },
   { "menu-item", A_info_menu_item },
   { "xref-item", A_info_xref_item },
   { "find-menu", A_info_find_menu },
   { "visit-menu", A_info_visit_menu },
   { "goto-node", A_info_goto_node },
   { "menu-sequence", A_info_menu_sequence },
   { "goto-invocation-node", A_info_goto_invocation_node },
   { "man", A_info_man },
   { "top-node", A_info_top_node },
   { "dir-node", A_info_dir_node },
   { "history-node", A_info_history_node },
   { "kill-node", A_info_kill_node },
   { "view-file", A_info_view_file },
   { "print-node", A_info_print_node },
   { "search-case-sensitively", A_info_search_case_sensitively },
   { "search", A_info_search },
   { "search-backward", A_info_search_backward },
   { "search-next", A_info_search_next },
   { "search-previous", A_info_search_previous },
   { "isearch-forward", A_isearch_forward },
   { "isearch-backward", A_isearch_backward },
   { "move-to-prev-xref", A_info_move_to_prev_xref },
   { "move-to-next-xref", A_info_move_to_next_xref },
   { "select-reference-this-line", A_info_select_reference_this_line },
   { "abort-key", A_info_abort_key },
   { "move-to-window-line", A_info_move_to_window_line },
   { "redraw-display", A_info_redraw_display },
   { "quit", A_info_quit },
   { "do-lowercase-version", A_info_do_lowercase_version },
   { "add-digit-to-numeric-arg", A_info_add_digit_to_numeric_arg },
   { "universal-argument", A_info_universal_argument },
   { "numeric-arg-digit-loop", A_info_numeric_arg_digit_loop },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/echo-area.c". */
   { "echo-area-forward", A_ea_forward },
   { "echo-area-backward", A_ea_backward },
   { "echo-area-beg-of-line", A_ea_beg_of_line },
   { "echo-area-end-of-line", A_ea_end_of_line },
   { "echo-area-forward-word", A_ea_forward_word },
   { "echo-area-backward-word", A_ea_backward_word },
   { "echo-area-delete", A_ea_delete },
   { "echo-area-rubout", A_ea_rubout },
   { "echo-area-abort", A_ea_abort },
   { "echo-area-newline", A_ea_newline },
   { "echo-area-quoted-insert", A_ea_quoted_insert },
   { "echo-area-insert", A_ea_insert },
   { "echo-area-tab-insert", A_ea_tab_insert },
   { "echo-area-transpose-chars", A_ea_transpose_chars },
   { "echo-area-yank", A_ea_yank },
   { "echo-area-yank-pop", A_ea_yank_pop },
   { "echo-area-kill-line", A_ea_kill_line },
   { "echo-area-backward-kill-line", A_ea_backward_kill_line },
   { "echo-area-kill-word", A_ea_kill_word },
   { "echo-area-backward-kill-word", A_ea_backward_kill_word },
   { "echo-area-possible-completions", A_ea_possible_completions },
   { "echo-area-complete", A_ea_complete },
   { "echo-area-scroll-completions-window", A_ea_scroll_completions_window },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/infodoc.c". */
   { "get-help-window", A_info_get_help_window },
   { "get-info-help-node", A_info_get_info_help_node },
   { "describe-key", A_describe_key },
   { "where-is", A_info_where_is },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/m-x.c". */
   { "describe-command", A_describe_command },
   { "execute-command", A_info_execute_command },
   { "set-screen-height", A_set_screen_height },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/indices.c". */
   { "index-search", A_info_index_search },
   { "next-index-match", A_info_next_index_match },
   { "index-apropos", A_info_index_apropos },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/nodemenu.c". */
   { "list-visited-nodes", A_list_visited_nodes },
   { "select-visited-node", A_select_visited_node },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/footnotes.c". */
   { "show-footnotes", A_info_show_footnotes },
/* Commands found in "/usr/src/minix_SO_FORK/gnu/dist/texinfo/info/variables.c". */
   { "describe-variable", A_describe_variable },
   { "set-variable", A_set_variable },
   { (char *)NULL, 0 }
};
