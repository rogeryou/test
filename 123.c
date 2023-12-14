1
2
/**
 * bch_init - Initialize the BCH encoder/decoder
 * @m: The m value of the encoder, specifying the block size as 2^m bytes
 * @t: The t value of the encoder, specifying the error correction capability as t
 *
 * Returns: A pointer to the initialized BCH encoder/decoder, or NULL if initialization fails
 */
struct bch_code *bch_init(int m, int t);

/**
 * bch_free - Free the memory occupied by the BCH encoder/decoder
 * @bch: The pointer to the BCH encoder/decoder to be freed
 */
void bch_free(struct bch_code *bch);

/**
 * bch_encode - Encode the data using the BCH encoder
 * @bch: The pointer to the BCH encoder
 * @data: The pointer to the data to be encoded
 * @ecc: The pointer to store the encoded error correction code
 */
void bch_encode(struct bch_code *bch, unsigned char *data, unsigned int *ecc);

/**
 * bch_decode - Decode the data using the BCH encoder
 * @bch: The pointer to the BCH encoder
 * @data: The pointer to the data to be decoded
 * @ecc: The pointer to store and retrieve the error correction code
 *
 * Returns: 0 if decoding is successful, -1 if errors cannot be corrected,
 *          or the number of corrected bits if errors are corrected
 */
int bch_decode(struct bch_code *bch, unsigned char *data, unsigned int *ecc);

/**
 * fls - Return the index of the highest set bit in an integer (counting from 1)
 * @x: The integer to find the index of the highest set bit
 *
 * Returns: The index of the highest set bit in x, or 0 if x is 0
 */
int fls(int x);
