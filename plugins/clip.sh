#!/bin/bash

# Clipboard plugin for CliFM
# Written by L. Abramovich
# Depends on xclip

# Use the 's' parameter to send files to the X primary clipboard, and
# the 'i' parameter to import files in the clipboard to the Selection
# box
# Examples:
# clip s file1 file2 ... (or sel)
# clip i

# When importing files from the clipboard, files should be absolute
# paths.

if [[ -z "$1" ]]; then
	echo "Usage: clip [s, i] FILE(s)"
	exit 0
fi

if ! [[ $(type -P xclip) ]]; then
	echo "CliFM: xclip: Command not found" >&2
	exit 1
fi

case $1 in
	's')
		shift 1
		# Send all files to xclip with no new line char

		# Clipboard values = primary, secondary, clipboard
		clipboard="primary"
		echo -n "$@" | xclip -selection "$clipboard"
	;;

	'i')
		# Replace non-escaped spaces by new line char
		xclip -o | sed 's/\([^\\]\) /\1\n/g' >> "$CLIFM_SELFILE"
	;;

	*)
		echo "Usage: clip [s, i] FILE(s)" >&2
		exit 1
	;;
esac

exit 0
