public Connection getConnection() throws SQLException, IOException {
    Properties properties = new Properties();

    try (InputStream inputStream = Files.newInputStream(Paths.get("jdbc.properties"))) {
        properties.load(inputStream);
    }
    String drivers = properties.getProperty("jdbc.drivers");
    if (drivers != null) {
        System.setProperty("jdbc.drivers", drivers);
    }
    String url = properties.getProperty("jdbc.url");
    String username = properties.getProperty("jdbc.username");
    String password = properties.getProperty("jdbc.password");
    return DriverManager.getConnection(url, username, password);
}

