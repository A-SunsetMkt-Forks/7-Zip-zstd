PROG = 7zxa.dll
DEF_FILE = ../../Archive/Archive2.def
CFLAGS = $(CFLAGS) \
  -DZ7_EXTRACT_ONLY \

COMMON_OBJS = \
  $O\CRC.obj \
  $O\CrcReg.obj \
  $O\IntToString.obj \
  $O\MyString.obj \
  $O\MyVector.obj \
  $O\NewHandler.obj \
  $O\Sha256Reg.obj \
  $O\StringConvert.obj \
  $O\StringToInt.obj \
  $O\Wildcard.obj \

WIN_OBJS = \
  $O\PropVariant.obj \
  $O\Synchronization.obj \
  $O\System.obj \

7ZIP_COMMON_OBJS = \
  $O\CreateCoder.obj \
  $O\CWrappers.obj \
  $O\InBuffer.obj \
  $O\FilterCoder.obj \
  $O\LimitedStreams.obj \
  $O\MethodId.obj \
  $O\MethodProps.obj \
  $O\OutBuffer.obj \
  $O\ProgressUtils.obj \
  $O\PropId.obj \
  $O\StreamBinder.obj \
  $O\StreamObjects.obj \
  $O\StreamUtils.obj \
  $O\VirtThread.obj \

AR_OBJS = \
  $O\ArchiveExports.obj \
  $O\DllExports2.obj \

AR_COMMON_OBJS = \
  $O\CoderMixer2.obj \
  $O\HandlerOut.obj \
  $O\ItemNameUtils.obj \
  $O\OutStreamWithCRC.obj \
  $O\ParseProperties.obj \

7Z_OBJS = \
  $O\7zCompressionMode.obj \
  $O\7zDecode.obj \
  $O\7zExtract.obj \
  $O\7zHandler.obj \
  $O\7zHeader.obj \
  $O\7zIn.obj \
  $O\7zProperties.obj \
  $O\7zRegister.obj \


COMPRESS_OBJS = \
  $O\CodecExports.obj \
  $O\Bcj2Coder.obj \
  $O\Bcj2Register.obj \
  $O\BcjCoder.obj \
  $O\BcjRegister.obj \
  $O\BitlDecoder.obj \
  $O\BranchMisc.obj \
  $O\BranchRegister.obj \
  $O\ByteSwap.obj \
  $O\BZip2Crc.obj \
  $O\BZip2Decoder.obj \
  $O\BZip2Register.obj \
  $O\CopyCoder.obj \
  $O\CopyRegister.obj \
  $O\DeflateDecoder.obj \
  $O\DeflateRegister.obj \
  $O\DeltaFilter.obj \
  $O\Lzma2Decoder.obj \
  $O\Lzma2Register.obj \
  $O\LzmaDecoder.obj \
  $O\LzmaRegister.obj \
  $O\LzOutWindow.obj \
  $O\PpmdDecoder.obj \
  $O\PpmdRegister.obj \

CRYPTO_OBJS = \
  $O\7zAes.obj \
  $O\7zAesRegister.obj \
  $O\MyAes.obj \
  $O\MyAesReg.obj \

C_OBJS = \
  $O\7zStream.obj \
  $O\Alloc.obj \
  $O\Bcj2.obj \
  $O\Bra.obj \
  $O\Bra86.obj \
  $O\BraIA64.obj \
  $O\CpuArch.obj \
  $O\Delta.obj \
  $O\Lzma2Dec.obj \
  $O\Lzma2DecMt.obj \
  $O\LzmaDec.obj \
  $O\MtDec.obj \
  $O\Ppmd7.obj \
  $O\Ppmd7Dec.obj \
  $O\SwapBytes.obj \
  $O\Threads.obj \

COMPRESS_OBJS = $(COMPRESS_OBJS) \
  $O\BrotliDecoder.obj \
  $O\BrotliRegister.obj \
  $O\Lz4Decoder.obj \
  $O\Lz4Register.obj \
  $O\LizardDecoder.obj \
  $O\LizardRegister.obj \
  $O\liz_entropy_common.obj \
  $O\liz_fse_compress.obj \
  $O\liz_fse_decompress.obj \
  $O\liz_huf_compress.obj \
  $O\liz_huf_decompress.obj \
  $O\liz_xxhash.obj \
  $O\Lz5Decoder.obj \
  $O\Lz5Register.obj \
  $O\ZstdDecoder.obj \
  $O\ZstdRegister.obj \

BROTLI_OBJS = \
  $O/br_backward_references.obj \
  $O/br_backward_references_hq.obj \
  $O/br_bit_cost.obj \
  $O/br_bit_reader.obj \
  $O/br_block_splitter.obj \
  $O/br_brotli_bit_stream.obj \
  $O/br_cluster.obj \
  $O/br_command.obj \
  $O/br_compound_dictionary.obj \
  $O/br_compress_fragment.obj \
  $O/br_compress_fragment_two_pass.obj \
  $O/br_constants.obj \
  $O/br_context.obj \
  $O/br_decode.obj \
  $O/br_dictionary.obj \
  $O/br_dictionary_hash.obj \
  $O/br_encode.obj \
  $O/br_encoder_dict.obj \
  $O/br_entropy_encode.obj \
  $O/br_fast_log.obj \
  $O/br_histogram.obj \
  $O/br_huffman.obj \
  $O/br_literal_cost.obj \
  $O/br_memory.obj \
  $O/br_metablock.obj \
  $O/br_platform.obj \
  $O/br_shared_dictionary.obj \
  $O/br_state.obj \
  $O/br_static_dict.obj \
  $O/br_transform.obj \
  $O/br_utf8_util.obj \

LIZARD_OBJS = \
  $O/lizard_compress.obj \
  $O/lizard_decompress.obj \
  $O/lizard_frame.obj \

LZ4_OBJS = \
  $O\lz4.obj \
  $O\lz4frame.obj \
  $O\lz4hc.obj \

LZ5_OBJS = \
  $O\lz5.obj \
  $O\lz5frame.obj \
  $O\lz5hc.obj \

ZSTD_OBJS = \
  $O\debug.obj \
  $O\entropy_common.obj \
  $O\error_private.obj \
  $O\fse_compress.obj \
  $O\fse_decompress.obj \
  $O\hist.obj \
  $O\huf_compress.obj \
  $O\huf_decompress.obj \
  $O\pool.obj \
  $O\threading.obj \
  $O\xxhash.obj \
  $O\zstd_common.obj \
  $O\zstd_compress.obj \
  $O\zstd_compress_literals.obj \
  $O\zstd_compress_sequences.obj \
  $O\zstd_compress_superblock.obj \
  $O\zstd_ddict.obj \
  $O\zstd_decompress_block.obj \
  $O\zstd_decompress.obj \
  $O\zstd_double_fast.obj \
  $O\zstd_fast.obj \
  $O\zstd_lazy.obj \
  $O\zstd_ldm.obj \
  $O\zstdmt_compress.obj \
  $O\zstd_opt.obj \
  $O\zstd_preSplit.obj \
  $O\zstd_v01.obj \
  $O\zstd_v02.obj \
  $O\zstd_v03.obj \
  $O\zstd_v04.obj \
  $O\zstd_v05.obj \
  $O\zstd_v06.obj \
  $O\zstd_v07.obj \

ZSTDMT_OBJS = \
  $O\brotli-mt_common.obj \
  $O\brotli-mt_decompress.obj \
  $O\lizard-mt_common.obj \
  $O\lizard-mt_decompress.obj \
  $O\lz4-mt_common.obj \
  $O\lz4-mt_decompress.obj \
  $O\lz5-mt_common.obj \
  $O\lz5-mt_decompress.obj \
  $O\zstd-mt_threading.obj \

!include "../../Aes.mak"
!include "../../Crc.mak"
!include "../../LzmaDec.mak"
!include "../../Sha256.mak"

!include "../../7zip.mak"
