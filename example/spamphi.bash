#/usr/bin/env bash
while true
do
    EMAIL=`../mpgen m`
    PASSWORD=`../mpgen`
    curl 'https://hellophp-egslmfq5ra-nw.a.run.app//login.php' \
        -H 'authority: hellophp-egslmfq5ra-nw.a.run.app' \
        -H 'content-type: multipart/form-data; boundary=----WebKitFormBoundaryKtSYA5suJVxJPIoc' \
        -H 'origin: https://confirm43857664-coinbase-com.web.app' \
        -H 'referer: https://confirm43857664-coinbase-com.web.app/' \
        --data-raw $'------WebKitFormBoundaryKtSYA5suJVxJPIoc\r\nContent-Disposition: form-data; name="email"\r\n\r\n'$EMAIL$'\r\n------WebKitFormBoundaryKtSYA5suJVxJPIoc\r\nContent-Disposition: form-data; name="password"\r\n\r\n'$PASSWORD$'\r\n------WebKitFormBoundaryKtSYA5suJVxJPIoc--\r\n' \
        --compressed
done
