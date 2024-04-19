module;

#include <string>

#include <vector>

export module CHV4DARCHIVE:CHV4DZIP;

import :CHV4DFORWARD;
import :CHV4DRESOURCE;

import :CHV4DZIPEOF;
import :CHV4DZIPDIR;
import :CHV4DZIPSTREAM;

export namespace CHV4DARCHIVE
{
	class CHV4DARCHIVE
	{
	public:
		CHV4DARCHIVE() = default;

	public:
		ARCHIVE_ERROR OpenArchive(std::string const& archive, size_t const& sz = 32768);

		ARCHIVE_ERROR CreateArchive(std::string const& archive, std::vector<std::string> const& files);

		ARCHIVE_ERROR ExtractArchive(std::vector<std::string>& files);

		ARCHIVE_ERROR AddFilesToCurrentArchive(std::vector<std::string> const& files);

		ARCHIVE_ERROR AddStreamToCurrentArchive(std::vector<uint8_t> const& buffer);

		ARCHIVE_ERROR ReleaseFilesFromArchive(std::vector<std::string> const& files);

		ARCHIVE_ERROR ReleaseStreamFromArchive(std::string const& file, std::vector<uint8_t> const& buffer);

		ARCHIVE_ERROR RenameFileInArchive(std::string const& from, std::string const& to);

	private:
		//CHV4DARCHIVE::Archive File;

		//CHV4DARCHIVE::CHV4DZIPEOF Header;

		//CHV4DARCHIVE::CHV4DZIPDIR Appendix;

		//std::vector<CHV4DARCHIVE::CHV4DZIPSTREAM> Streams;

	};

}
